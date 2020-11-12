#include <iostream>
#include <cstring>

struct employee {
  const char* name;
  const char* job;
  unsigned  age;
  unsigned exp;
};

void jobs(employee** arr, int amount) {
  for (unsigned i = 0; i < amount; ++i) {
      std::cout << arr[i]->job << '\n';
  }
}

double avgAge(employee** arr, int amount){
  double total = 0;
  for (int i = 0; i < amount; ++i){
    total += arr[i]->age;
  }
  return total/amount;
}

int main(int argc, char *argv[]) {
  employee* arr[] = {
    new employee((employee){"Rick", "Seller", 22, 1}),
    new employee((employee){"Nik", "Manager", 31, 4}),
    new employee((employee){"Dave", "Cleaner", 44, 9}),
  };

  jobs(arr, 3);
  std::cout << avgAge(arr, 3);

  for (int i = 0; i < 3; ++i){
    delete arr[i];
  }
  return 0;
}