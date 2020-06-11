#include <iostream> 
#include <string.h> 

using namespace std;  

struct addr{ 
    unsigned ind; 
    const char* city; 
    const char* str; 
    unsigned num; 
}; 

unsigned mostInd(addr** arr, unsigned size){
  unsigned *count = new unsigned[1000000](), most = 0, biggest = 0;
  for (int i = 0; i < size; i++){
    ++count[arr[i]->ind];
  }
  for (int i = 0; i < 1000000; i++){
    if (count[i] > biggest){
      biggest = count[i];
      most = i;
    }
  }
  return most;
}
 
 bool noRepeat (addr** arr, unsigned size){
   unsigned search;
   const char* city;
   for (int i = 0; i < size; i++){
     search = arr[i]->ind;
     city = arr[i]->city;
      for (int j = 0; j < size; j++){
       if (arr[j]->ind == search && strcmp(arr[j]->city, city) != 0){
         return false;
       }
     }
   }
   return true;
 }

int main(int argc, char** argv) { 
  addr** arr = new addr*[6]; 

  arr[0] = new addr({ 443322, "Kazan", "Zhitorskaya", 5 }); 
  arr[1] = new addr({ 658904, "Sevastopl", "Rabochaya", 17 }); 
  arr[2] = new addr({ 221222,  "Moskow", "Zavodskaya", 300 }); 
  arr[3] = new addr({ 221222, "Moskow", "Taganskaya",101 }); 
  arr[4] = new addr({ 990017, "Omsk", "Leinina", 5 }); 
  arr[5] = new addr({ 800010, "Moskow", "Komsomolskaya", 99 }); 

  cout << "mostInd: " << mostInd(arr, 6) << '\n';
  cout << "noReapeat: " << noRepeat(arr, 6) << '\n';
  arr[5]->ind = arr[1]->ind;
  cout << "noReapeat: " << noRepeat(arr, 6) << '\n';
  arr[4]->ind = arr[1]->ind;
  cout << "mostInd: " << mostInd(arr, 6) << '\n';

  return 0; 
} 