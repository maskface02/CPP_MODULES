#include "Harl.hpp"

int main(int ac, char **av) {
  if (ac != 2) {
    std::cout << "Usage: ./harlFilter <level>" << std::endl;
    std::cout << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
    return 1;
  }

  Harl harl;
  std::string level = av[1];
  int levelIndex = -1;
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  
  for (int i = 0; i < 4; i++) {
      if (levels[i] == level) {
          levelIndex = i;
          break;
      }
  }
  
  switch (levelIndex) {
      case 0:
          harl.complain("DEBUG");
          // fall through
      case 1:
          harl.complain("INFO");
          // fall through
      case 2:
          harl.complain("WARNING");
          // fall through
      case 3:
          harl.complain("ERROR");
          break;
      default:
          std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
          break;
  }
  return 0;
}
