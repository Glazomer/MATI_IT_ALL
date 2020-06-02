#include <iostream>

enum jobs{
  cook,
  waiter,
  cleaner,
  manager  
};

struct employee{
  char* name;
  jobs job;
  int  age;
  int exp;
  employee(char* name, jobs job, int  age, int exp) : name(name), job(job), age(age), exp(exp){};
};

void coutJob (int job){
  switch (job){
  case 0:
    std::cout << "job is cook\n"; 
    break;
  case 1:
    std::cout << "job is waiter\n"; 
    break;
  case 2:
    std::cout << "job is cleaner\n"; 
    break;
  case 3:
    std::cout << "job is manager\n"; 
    break;
  default:
    std::cout << "most job"; 
    break;
  }
}

void function1(employee* a[], int size){
  int max = 0, job = 0;
  int jobs[4] = {0};

  for (int i = 0; i < size; i++){
    ++jobs[a[i]->job];
    if (jobs[a[i]->job] > max){
      max = jobs[a[i]->job];
      job = a[i]->job;
    }
  }

  std::cout << "Popular: ";
  coutJob(job);
}


void function2(employee* a[], int size){
  int job = 0;
  float sumAge[4] = {0},
    number[4] = {0},
    max = 0,
    now = 0;

  for (int i = 0; i < size; i++){
    ++number[a[i]->job];
    sumAge[a[i]->job] += a[i]->age;
  }
  for (int i = 0; i < size; i++){
    now = sumAge[a[i]->job] / number[a[i]->job];
    if (now > max){
      max = now;
      job = a[i]->job;
    }
  }

  std::cout << "Highest age: ";
  coutJob(job);
}

int main(int argc, char **argv) {
  employee* a[] = {
    new employee((char *)"Dima", jobs::cook, 35, 18),
    new employee((char *)"Andrey", jobs::cleaner, 18, 1),
    new employee((char *)"Danil", jobs::cook, 60, 40),
    new employee((char *)"Nikita", jobs::waiter, 27, 3),
    new employee((char *)"Tanya", jobs::waiter, 21, 1),
    new employee((char *)"Alexey", jobs::waiter, 19, 0),
  };

  function1(a, 6);
  function2(a, 6);
  
  system("pause");
	return 0;
}