/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 00:02:06 by zatais            #+#    #+#             */
/*   Updated: 2026/03/18 15:03:58 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <ctime>
#include <cstdlib>

class BitcoinExchange {
private:
  std::map<std::string, float> data;
  int checkDate(std::string date);
  float checkVal(std::string val);
  void searchAndCal(std::string date, float value);

public:
  BitcoinExchange();
  ~BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &other);
  BitcoinExchange &operator=(const BitcoinExchange &other);

  int readData();
  int parseInputFile(char *fileName);
};
#endif // !BitcoinExchange
