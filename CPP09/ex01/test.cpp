#include <iostream>
#include <sstream>
#include <string>
bool isNumber(const std::string& token, int& num)
{
  std::string leftover;
  std::stringstream input(token);
  if (input >> num && !(input >> leftover))
    return true;
  std::cout << "leftover: for " << token <<" is " << leftover << "" << std::endl;
  return false;
}

int main()
{
  std::string tokens[] = {"3", "42", "123abc44", "+", "-", "*", "/", "3.14", "abc", ""};
  int size = 10;

  for (int i = 0; i < size; i++)
  {
      int num;
      if (isNumber(tokens[i], num))
          std::cout << "\"" << tokens[i] << "\" → number: " << num << std::endl;
      else
          std::cout << "\"" << tokens[i] << "\" → not a number" << std::endl;
  }
  return 0;
}
