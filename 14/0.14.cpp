#include <iostream>
#include <string>

using namespace std;

class Integer {
    string status;
    long value;

    void applyStatus() {
        if (value == 0)
            status = "NaN";
        else if (value > 0)
            status = "+inf";
        else status = "-inf";
    }

public:
    Integer(int x) : value(x), status("number") {
    }

    string getValue() const {
        if (status == "number")
            return to_string(value);
        else return status;
    }

    template<class T>
    void setValue(T x) {
        value = x;
    }

/*
* Sum operators
*/
    friend Integer operator+(Integer &a, Integer &b);

    template<class T>
    friend Integer operator+(Integer &a, T &b);

    template<class T>
    friend T operator+(T &b, Integer &a);

/*
* Diff operators
*/
    friend Integer operator-(Integer &a, Integer &b);

    template<class T>
    friend Integer operator-(Integer &a, T &b);

    template<class T>
    friend T operator-(T &b, Integer &a);

/*
* Multiplying operators
*/
    friend Integer operator*(Integer &a, Integer &b);

    template<class T>
    friend Integer operator*(Integer &a, T &b);

    template<class T>
    friend T operator*(T &b, Integer &a);

/*
* Division operators
*/
    friend Integer operator/(Integer &a, Integer &b);

    template<class T>
    friend Integer operator/(Integer &a, T &b);

    template<class T>
    friend T operator/(T &b, Integer &a);

    friend ostream &operator<<(ostream &s, Integer &a);
};

ostream &operator<<(ostream &s, Integer &a) {
    if (a.status == "number")
        s << a.value;
    else s << a.status;
    return s;
}

Integer operator+(Integer &a, Integer &b) {
    if (!(a.status == "number" && b.status == "number"))
        return a;
    Integer i(a.value + b.value);
    return i;
}

template<class T>
Integer operator+(Integer &a, T &b) {
    if (a.status != "number")
        return a;
    Integer i(a.value + b);
    return i;
}

template<class T>
Integer operator+(T &b, Integer &a) {
    if (a.status != "number")
        return b;
    Integer i(b + a.value);
    return i;
}

Integer operator-(Integer &a, Integer &b) {
    if (!(a.status == "number" && b.status == "number"))
        return a;
    Integer i(a.value - b.value);
    return i;
}

template<class T>
Integer operator-(Integer &a, T &b) {
    if (a.status != "number")
        return a;
    Integer i(a.value - b);
    return i;
}

template<class T>
Integer operator-(T &b, Integer &a) {
    if (a.status != "number")
        return b;
    Integer i(b-a.value);
    return i;
}

Integer operator*(Integer &a, Integer &b) {
    if (a.status == "+inf" && b.status == "+inf") {
        Integer i(1);
        i.applyStatus();
        return i;
    }
    if (a.status == "+inf" && b.status == "-inf") {
        Integer i(-1);
        i.applyStatus();
        return i;
    }
    if (a.status == "-inf" && b.status == "+inf") {
        Integer i(-1);
        i.applyStatus();
        return i;
    }
    if (a.status == "+inf") {
        if (b.value == -1) {
            Integer i(-1);
            i.applyStatus(); // теперь это минус бесконечность
            return i;
        }
    }
    if (a.status == "+inf" || a.status == "-inf") {
        if (b.value == 0) {
            Integer i(0);
            i.applyStatus(); // теперь это неопред
            return i;
        }
    }
    Integer i(a.value * b.value);
    return i;
}

template<class T>
Integer operator*(Integer &a, T &b) {
    if (a.status == "+inf") {
        if (b == -1) {
            Integer i(-1);
            i.applyStatus(); // теперь это минус бесконечность
            return i;
        }
    }
    if (a.status == "+inf" || a.status == "-inf") {
        if (b == 0) {
            Integer i(0);
            i.applyStatus(); // теперь это неопред
            return i;
        }
    }
    if (a.status != "number")
        return a;
    Integer i(a.value * b);
    return i;
}

template<class T>
Integer operator*(T &b, Integer &a) {
    if (a.status == "+inf") {
        if (b == -1) {
            Integer i(-1);
            i.applyStatus(); // теперь это минус бесконечность
            return i;
        }
    }
    if (a.status == "+inf" || a.status == "-inf") {
        if (b == 0) {
            Integer i(0);
            i.applyStatus(); // теперь это неопред
            return i;
        }
    }
    if (a.status != "number")
        return a;
    Integer i(a.value * b);
    return i;
}

Integer operator/(Integer &a, Integer &b) {
    if (b.value == 0) {
        a.applyStatus();
        return a;
    }
    Integer i(a.value / b.value);
    return i;
}

template<class T>
Integer operator/(Integer &a, T &b) {
    if (b == 0) {
        a.applyStatus();
        return a;
    }
    Integer i(a.value / b);
    return i;
}

template<class T>
T operator/(T &b, Integer &a) {
    if (a.status != "number" || a.value == 0)
        return b;
    return b / a.value;
}

int main() {
    Integer a(1);
    int b = 120;
    double c = 230;
    short d = 0;
    a = b + c;
    cout << " Checking sum\n a = 120 + 230 = ";
    cout << a;
    a = a - c;
    cout << "\n Checking diff\n a = a - 230 = ";
    cout << a;
    a = a * c;
    cout << "\n Checking multiplying\n a = a * 230 = ";
    cout << a;
    a = a / c;
    cout << "\n Checking division\n a = a / 230 = ";
    cout << a;
    cout << "\n All operations work properly.\n Now checking division by 0: a / 0 = ";
    a = a / d;
    cout << a;
    cout << "\n Checking, 0/0 = NaN\n";
    a = 0;
    a = a / d;
    cout << " 0 / 0 = " << a;
    cout << "\n Checking, -1/0 = -inf\n";
    a = -1;
    a = a / d;
    cout << " -1 / 0 = " << a;
    cout << "\n Checking that if a = -inf or inf of NaN, no operations are executed. a + 120 = ";
    Integer w =  a + b;
    cout<<w<<endl;
    cout << "Checking now operation for two variables of type Integer\n q = 10 and a = 12 | q + a = ";
    a = 12;
    Integer q(10);
    a = q + a;
    cout << a;
    cout << "\n Checking get and set methods\n get: ";
    cout << a.getValue();
    cout << "\n Set value to 100. Checking: ";
    a.setValue(100);
    cout << a << endl;
    cout<<"Update: checking operator*\n";
    Integer g(12);
    Integer f(0);
    cout<<"12 / 0 = ";
    Integer plus_inf = g/f;
    cout<<plus_inf<<endl;
    cout<<"Update: checking operator*\n";
    Integer h(-23);
    Integer j(0);
    cout<<"-23 / 0 = ";
    Integer minus_inf = h/j;
    cout<<minus_inf<<endl;
    cout<<"+inf * -inf = ";
    Integer result = minus_inf * plus_inf;
    cout<<result;
    return 0;
}