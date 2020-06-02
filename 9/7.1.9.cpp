#include <iostream>
#include <cstring>

struct product
{
  const char* shop;
  const char* name;
  int  price;
  int count;
};

void inShop(product* products[], int amount, const char* shop){
  std::cout << "In shop \"" << shop << "\" there are: ";
  for (int i = 0; i < amount; i++){
    if(!strcmp(products[i]->shop, shop)){
      printf("%s, (price: %i, count: %i), ", products[i]->name, products[i]->price, products[i]->count);
    }
  }
  std::cout << std::endl;
}

void shopsWith(product* products[], int amount, const char* name){
  std::cout << "There is \"" << name << "\" in: ";
  for (int i = 0; i < amount; i++){
    if(!strcmp(products[i]->name, name)){
      printf("%s, (price: %i, count: %i), ", products[i]->shop, products[i]->price, products[i]->count);
    }
  }
  std::cout << std::endl;
}


int main(int argc, char *argv[]) {
  product* arr[10];
  arr[0] = new product{"Five", "Chocolate", 14, 100};
  arr[1] = new product{"Cross", "Chocolate", 16, 750};
  arr[2] = new product{"Magnet", "Chocolate", 13, 50};
  arr[3] = new product{"Auchan", "Chocolate", 9, 100};
  arr[4] = new product{"Auchan", "Rice", 53, 300};
  arr[5] = new product{"Cross", "Rice", 61, 120};
  arr[6] = new product{"Cross", "Water", 43, 70};
  arr[7] = new product{"Magnet", "Water", 51, 15};
  arr[8] = new product{"Auchan", "Water", 23, 700};
  arr[9] = new product{"Billa", "Water", 19, 135};

  shopsWith(arr, 10, "Water");
  inShop(arr, 10, "Cross");

  return 0;
}