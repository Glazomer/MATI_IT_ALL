#include <iostream>

struct Report
{
  const char *subject;
  const char *group;
  const char **students;
  unsigned *studId;
  double *scores;
  int n; 
};

void CreateReport(Report& r, unsigned n)
{
  r.n = n; 
  r.students = new const char*[n]; 
  r.studId = new unsigned[n]; 
  r.scores = new double[n]; 
}

void DeleteReport(Report& r)
{
  delete[] r.students;
  delete[] r.studId;
  delete[] r.scores;
}

void AddStudent(Report& r, int& i, const char *student, double score)
{
  if (i < r.n){
    r.studId[i] = i;
    r.students[i] = student;
    r.scores[i] = score;
    ++i;
  }
}

double* Avarage(Report** arr, unsigned size)
{
  double *marks = new double[size];
  for (int j = 0; j < size; j++){
    Report *v = arr[j];
    for(int i = 0; i < v->n; i++)
      marks[v->studId[i]] += v->scores[i];
  }
  for(int i = 0; i < arr[0]->n; i++){
    marks[i] /= size;
  }
  return marks;
}


int main()
{
  Report r1,r2,r3;
  CreateReport(r1, 7);
  r1.subject = "Math";
  r1.group = "T12O-101C-19";
  CreateReport(r2, 7);
  r2.subject = "English";
  r2.group = "T12O-101C-19";
  CreateReport(r3, 7);
  r3.subject = "Science";
  r3.group = "T12O-101C-19";

  int i = 0;
  AddStudent(r1, i, "Maxim", 87);
  AddStudent(r1, i, "Denis", 92);
  AddStudent(r1, i, "Nikita", 68);
  AddStudent(r1, i, "Natasha", 91);
  AddStudent(r1, i, "Kiril", 43);
  AddStudent(r1, i, "Robert", 77);
  AddStudent(r1, i, "Angelina", 59);
  i = 0;
  AddStudent(r2, i, "Maxim", 45);
  AddStudent(r2, i, "Denis", 27);
  AddStudent(r2, i, "Nikita", 89);
  AddStudent(r2, i, "Natasha", 99);
  AddStudent(r2, i, "Kiril", 18);
  AddStudent(r2, i, "Robert", 73);
  AddStudent(r2, i, "Angelina", 64);
  i = 0;
  AddStudent(r3, i, "Maxim", 46);
  AddStudent(r3, i, "Denis", 27);
  AddStudent(r3, i, "Nikita", 34);
  AddStudent(r3, i, "Natasha", 59);
  AddStudent(r3, i, "Kiril", 87);
  AddStudent(r3, i, "Robert", 92);
  AddStudent(r3, i, "Angelina", 66);
  Report *r[] = {&r1,&r2,&r3};
  double* marks = Avarage(r, sizeof(r)/sizeof(r[0]));
  for (int i = 0; i < r1.n; i++){
    printf("%s have avarage score: %g\n", r1.students[i], marks[i]);
  }
  DeleteReport(r1);
  DeleteReport(r2);
  DeleteReport(r3);
  delete [] marks;
  return 0;
}