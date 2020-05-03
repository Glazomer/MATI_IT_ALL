#include <iostream>

int main(int argc, char *argv[]) {

  double X, Y;
  std::cin >> X;
  std::cin >> Y;

  double result1, result2, result3;
  
  try
  {
    result1 = 1/(X*X + Y*Y + 4); // Никогда не будет деления на 0
    if ((Y-7) == 0)
    {
      throw 1;
    }
    result2 = (-X)/(Y-7);

    if ((X-1) != 0)
    {
      throw 2;
    }
      result3 = Y/(X-1);
  }
  catch (int err)
  {
    if (err == 1){
      std::cout << "error: division by zero" << std::endl;
      if ((X-1) != 0 && result1 < Y/(X-1)){
        result3 = Y/(X-1);
        std::cout << result3 << std::endl;
      }else{
        std::cout << result1 << std::endl;
      }
    }else if (err == 2){
      if (result1 < result2){
        std::cout << result1 << std::endl;
      }else{
        std::cout << result2 << std::endl;
      }
    }else{
      std::cout << "error: any error" << std::endl;
    }
  }
  catch (...){
    std::cout << "unknown error" << std::endl;
  }

  return 0;
}