

#include <iostream>
#include <string>

int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int mul(int a, int b){return a*b;}

int main (int ac, char**av) {
  std::string arr[] = {"add", "sub", "mull"};
  // int (*funcs[])(int, int) = {&add, &sub, &mul};
  // int i = -1;
  // while (++i <  3) {
  //   if (arr[i] == av[1])
  //     std::cout << funcs[i](atoi(av[2]), atoi(av[3]))<< std::endl;
  //
  // }
  int i = -1;
  int index;
  while (++i < 3)
  {
    if (arr[i] == av[1]){
      index = i;
      break;
    }
  }
  ++index;
  switch (index) {
    case 1:
      std::cout << add(atoi(av[2]), atoi(av[3])) << std::endl;
      break;
    case 2:
      std::cout << sub(atoi(av[2]), atoi(av[3])) << std::endl;
      break;
    case 3:
      std::cout << mul(atoi(av[2]), atoi(av[3])) << std::endl;
      break;
    default:
      break;
  }
  return 0;
}
