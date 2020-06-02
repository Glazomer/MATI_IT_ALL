#include <iostream> 
#include <vector> 
#include <string> 

using namespace std;  

typedef struct { 
    int zip; 
    string city; 
    string street; 
    int home; 
} address; 

 

void printStreetOfCity(vector<address*> addrs, string city) { 
  for (int i = 0; i < addrs.size(); ++i) 
    if (addrs[i]->city == city) 
      cout << addrs[i]->street << endl; 
} 

 
void printHomeOfStreet(vector<address*> addrs, string street) { 
  for (int i = 0; i < addrs.size(); ++i) 
    if (addrs[i]->street == street) 
      cout << addrs[i]->home << endl; 
} 

 

int main(int argc, char** argv) { 
  vector<address*> addresses(5); 

  addresses[0] = new address({ .zip = 756894, .city = "Korsakov", .street = "Shkolnaia", .home = 15 }); 
  addresses[1] = new address({ .zip = 309478, .city = "Podolsk", .street = "Pobedi", .home = 20 }); 
  addresses[2] = new address({ .zip = 235767, .city = "Torgok", .street = "Stroitelei", .home = 30 }); 
  addresses[3] = new address({ .zip = 127497, .city = "Mias", .street = "Pushkina", .home = 100 }); 
  addresses[4] = new address({ .zip = 233489, .city = "Omsk", .street = "Lugovaia", .home = 25 }); 

  printStreetOfCity(addresses, string("Podolsk")); 
  printHomeOfStreet(addresses, string("Pobedi")); 
  return 0; 
} 