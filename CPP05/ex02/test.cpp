#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
  int time = std::time(0);

  std::cout << "Curent time is: " << time << std::endl; 
  std::srand(time);
  std::cout << rand() << std::endl;
  std::cout << rand() << std::endl;
  std::cout << rand() << std::endl;
}

