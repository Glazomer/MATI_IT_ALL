#include <iostream> 
#include <iostream> 
using namespace std; 
struct Product 
{ 
char *name;
char *shop;
unsigned int price; 
unsigned int quantity;
}; 

void Find(Product** prop, unsigned int s, char *n, unsigned int p)
{
  for (int i = 0; i < s; i++)
  if (strcmp(prop[i]->name, n) == 0 && prop[i]->quantity != 0  && prop[i]->price < p)
  std::cout << prop[i]->shop << '\n';
}

void CreateProduct(Product& p, char *name, char *shop, unsigned int price, unsigned int quantity) 
{ p.name = name;
p.shop = shop;
p.price = price;
p.quantity = quantity;
} 


int main() 
{
Product p1, p2, p3, p4;
CreateProduct(p1, "coffee","shop1",5,10);
CreateProduct(p2, "coffee","shop2",12,25);
CreateProduct(p3, "coffee","shop3",7,0);
CreateProduct(p4, "coffee","shop4",9,100);
Product* p[4];
p[0]= &p1;
p[1] = &p2;
p[2] = &p3; 
p[3] = &p4;
Find(p, 4, "coffee", 10);
return 0; 
}
