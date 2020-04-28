#include <iostream>

using namespace std;

#define endl '\n'


typedef struct {
  int zip;
  const char* city;
  const char* street;
  int home;
} address;

void printStreetOfCity (address* addrs, size_t addrSize, const char* city){
  for (int i = 0; i < addrSize; ++i){
    address addr = addrs[i];
    if (!strcmp(addr.city, city)){
      cout << addr.street << endl;
    }
  }
}

void printHomeOfStreet (address* addrs, size_t addrSize, const char* street){
  for (int i = 0; i < addrSize; ++i){
    address addr = addrs[i];
    if (!strcmp(addr.street, street)){
      cout << addr.home << endl;
    }
  }
}

int main(int argc, char **argv){
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  address *addresses = new address[5];  

  addresses[0] = {.zip = 123456, .city = "Novosibirsk", .street = "Centralnya", .home = 80 };
  addresses[1] = {.zip = 677839, .city = "Don", .street = "Pobedi", .home = 18 };
  addresses[2] = {.zip = 989621, .city = "Novosibirsk", .street = "Armeiskaya", .home = 43 };
  addresses[3] = {.zip = 455544, .city = "Novosibirsk", .street = "Pobedi", .home = 138 };
  addresses[4] = {.zip = 782610, .city = "Moskow", .street = "Ilicha", .home = 138 };

  printStreetOfCity(addresses, sizeof(*addresses)/sizeof(addresses) + 1, "Novosibirsk");
  printHomeOfStreet(addresses, sizeof(*addresses)/sizeof(addresses) + 1, "Pobedi");

  return 0;
}