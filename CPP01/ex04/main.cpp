#include <string>
#include <fstream>
#include <iostream>


void SearchAndReplace(std::string &line, std::string &str1, std::string &str2) {

  size_t pos = line.find(str1); 
  while (pos != std::string::npos) {
    line = line.substr(0, pos) + str2 + line.substr(pos + str1.length());
    std::cout << "testing......." + line << std::endl;
    pos += str2.length();
    pos = line.find(str1, pos);
  }
}

int main (int ac, char **av) {

  std::string in;
  std::string out;
  std::string str1;
  std::string str2;
  std::string line;

  if (ac != 4)
  {
    std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
    return 1;
  }

  in = av[1];
  str1 = av[2];
  str2 = av[3];
  out = in + ".replace";

  std::ifstream inFile(in.c_str());
  std::ofstream outFile(out.c_str());
  if (!inFile.is_open() || !outFile.is_open())
  {
    std::cout << "Error opening infile Or outfile" << std::endl;
    return 1;
  }

  while (getline(inFile, line))
  {
    SearchAndReplace(line, str1, str2);
    outFile << line;
    if (!inFile.eof())
      outFile << std::endl;
  }

  inFile.close();
  outFile.close();
  return 0;
}
