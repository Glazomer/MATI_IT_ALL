#include <iostream> 

struct address{ 
    const char* gorod; 
    const char* ulica; 
    int cod; 
    int dom; 
};

void find(address** addresses, int size, const char* gorod, const char* ulica, int dom) { 
  for (int i = 0; i < size; i++) {
    address* ptr = addresses[i];
    if (ptr->gorod == gorod) {
       printf("Code of (%s, %s, %i) is %i\n", ptr->gorod, ptr->ulica, ptr->dom, ptr->cod);
      return;
    }
  }
  printf("Can not find %s, %s, %i\n", gorod, ulica, dom);
}  
void cod(address** addresses, int size, int cod) { 
  for (int i = 0; i < size; i++) {
    address* ptr = addresses[i];
    if (ptr->cod == cod) {
       printf("Found: %s, %s, %i\n", ptr->gorod, ptr->ulica, ptr->dom);
    }
  }
}  

 

int main(int argc, char** argv) { 
  address* addresses[] =  {
    new address({"Moskow", "Bern", 1234, 7}), 
    new address({"Moskow", "Tagankf", 1234, 9}),
    new address({"Novosibirsk", "Lenina", 1234, 7})
  };

  find(addresses, 3, "Moskow", "Bern", 7);
  std::cout << std::endl;
  cod(addresses, 3, 1234);

  return 0; 
} 