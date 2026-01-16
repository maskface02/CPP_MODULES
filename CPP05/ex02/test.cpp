#include <iostream>
#include <cstdlib>
#include <ctime>

void test(std::string &t){
  t="test2";
}

int main() {
  const std::string t = "hello";
   std::string q = "test";
   test(t);
   test(q);
  std::cout << q + t << std::endl;
  // int t = time(0);
  //
  // std::cout << "Curent time is: " << time << std::endl; 
  // std::srand(t);
  // std::cout << rand() << std::endl;
  // std::cout << rand() << std::endl;
  // std::cout << rand() << std::endl;
}

