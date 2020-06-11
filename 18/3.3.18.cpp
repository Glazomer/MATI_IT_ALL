#include <iostream>
int main()
{ 
  int h;
  std::cin >> h;
  if (h < 0 || h > 23)
    printf("Wrong!\n");
  else if (h < 10)
    printf("-10: Вчера %i\n+10: %i\n",24 + (h - 10), h + 10);
  else if (h > 13)
    printf("-10: %i\n+10: Завтра %i\n",h - 10, h - 14);
  else
    printf("-10: %i\n+10: %i\n",h - 10, h + 10);
  return 0;
}