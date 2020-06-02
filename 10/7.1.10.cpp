#include <iostream> 
using namespace std; 
struct Product 
{ 
unsigned int quantity; 
unsigned int price; 
char *name;
char *shop;
}; 

void CreateProduct(Product& p, unsigned int quantity, unsigned int price, char *name, char *shop) 
{ p.quantity = quantity;
p.price = price;
p.name = name;
p.shop = shop;
} 


int main() 
{
return 0; 
}
