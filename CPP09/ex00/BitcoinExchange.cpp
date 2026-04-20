/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:54:06 by zatais            #+#    #+#             */
/*   Updated: 2026/03/16 14:54:06 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){data = other.data; return *this;}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){data = other.data;}

int BitcoinExchange::readData() {
  float         val;
  size_t        pos;
  std::string   data;
  std::string   date;
  std::ifstream dataFile("data.csv");

  if (!dataFile.is_open())
  {
    std::cerr << "Couldn't open data.csv file!" << std::endl;
    return 1;
  }

  while (std::getline(dataFile,data))
  {
    if (data != "date,exchange_rate")
    {
      pos =  data.find(",");
      date = data.substr(0,pos);
      val = atof(data.substr(pos + 1).c_str());
      this->data[date] = val;
    }
  }

  return 0;
}

int BitcoinExchange::checkDate(std::string date){
  int i =-1;
  
  if (date.length() != 10 || date[4] != '-' || date[7] != '-')
    return 0;

  while (++i < 10)
  {
    if (i == 4 || i == 7)
      continue;
    if (!(date[i] >= '0' && date[i] <= '9'))
      return 0;
  }
  
  int year = atoi(date.substr(0, 4).c_str());
  int month = atoi(date.substr(5,2).c_str());
  int day = atoi(date.substr(8).c_str());
  
  struct tm time = {};

  time.tm_year = year - 1900;
  time.tm_mon = month - 1;
  time.tm_mday = day;

  mktime(&time);
  if (time.tm_year != year - 1900 || time.tm_mon != month - 1 || time.tm_mday != day)
      return (0);
  return (1);
}


float BitcoinExchange::checkVal(std::string val) {
  int   dot = 0;
  float value;
  
  if (val.empty() || val[0] == '.' || val[val.length()-1] == '.')
    return -1;
  if (val[0] == '-')
  {
    std::cerr << "Error: not a positive number." << std::endl;
    return -2;
  }

  for (size_t i = 0; i < val.length(); i++)
  {
    if (val[i] == '.')
    {
      if (dot)
        return -1;
      dot++;
      continue;
    }
    if (!(val[i] >= '0' && val[i] <= '9'))
      return -1;
  }

  value = atof(val.c_str());
  if (value > 1000)
  {
    std::cerr << "Error: too large a number." << std::endl;
    return (-2);
  }
  return value;
}

void BitcoinExchange::searchAndCal(std::string date, float value)
{
    std::map<std::string, float>::iterator it = data.upper_bound(date);

    if (it == data.begin())
    {
        std::cerr << "Error: date out of range." << std::endl;
        return;
    }
    --it;
    std::cerr << date << " => " << value << " = " << value * it->second << std::endl;
}

int BitcoinExchange::parseInputFile(char *fileName) {
  int           val;
  int           header = 0;
  size_t        pos;
  std::string   date;
  std::string   inputData;
  std::ifstream inputFile(fileName);

  if (!inputFile.is_open())
  {
    std::cerr << "Couldn't open input file!" << std::endl;
    return 1;
  }

  while(std::getline(inputFile, inputData))
  {
    if (inputData == "date | value")
      header+= 1;
    if (inputData.empty())
      continue;
    if (inputData != "date | value")
    {
      if (header > 1)
      {
        std::cerr << "The file sould contain only one header!!" << std::endl;
        return 1;
      }
      pos = inputData.find("|");
      if (pos == std::string::npos || pos == 0 || pos == inputData.length() - 1)
      {
        std::cerr << "Error: bad input => " << inputData << std::endl;
        continue;
      }
      date = inputData.substr(0, pos - 1);
      if (!checkDate(date))
      {
        std::cerr << "Error: bad input => " << inputData << std::endl;
        continue;
      }
      val = checkVal(inputData.substr(pos + 2));
      if (val == -1)
      {
        std::cerr << "Error: bad input => " << inputData << std::endl;
        continue;
      }
      if (val == -2)
        continue;
      searchAndCal(date, val);
    }
  }
  return 0;
}
