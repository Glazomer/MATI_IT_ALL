#include <iostream>

struct Book{
  const char* name;
  const char* author;
  const char* est;
  unsigned year;
  unsigned pages;
  Book( const char* name, const char* author, const char* est, unsigned year, unsigned pages):
  name(name), author(author), est(est), year(year), pages(pages){};
};

void PrintBook(Book* b){
  printf("%s (Author: %s, by: %s, in: %u, pages: %u)\n", b->name, b->author, b->est, b->year, b->pages);
}

void PrintRange(Book** arr, unsigned s, unsigned from, unsigned to){
  while(s-- != 0)
    if (from <= arr[s]->year && arr[s]->year <= to)
      PrintBook(arr[s]);
}

int main(int argc, char **argv){
  Book* arr[] = {
    new Book("Harry Potter", "J.K.Rowling", "Press", 2000, 300),
    new Book("It", "Stephen King", "Viking press", 1986, 1138),
    new Book("War and Peace", "L.N.Tolstoi", "Ruskyi Vestnik", 1867, 1225),
  };
  PrintRange(arr, sizeof(arr)/sizeof(arr[0]), 1900, 2020);
  return 0;
}