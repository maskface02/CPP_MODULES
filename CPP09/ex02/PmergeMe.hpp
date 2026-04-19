/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 18:18:25 by zatais            #+#    #+#             */
/*   Updated: 2026/03/29 18:18:25 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <climits>
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
#include <sys/time.h>
#include <vector>

class PmergeMe {
private:
  double _deqTime;
  double _vecTime;
  std::deque<int> _origDeq;
  std::vector<int> _origVec;
  std::deque<int> _sortedDeq;
  std::vector<int> _sortedVec;

  std::vector<int> _generateJacobsthal(int n);
  bool _isValidNumber(std::string &str);
  std::deque<int> _fordJohnsonDeq(std::deque<int> container);
  std::vector<int> _fordJohnsonVec(std::vector<int> container);
  int _binaryInsertDeq(std::deque<int> &main, int elem, int high);
  int _binaryInsertVec(std::vector<int> &main, int elem, int high);
  void _printVec(const std::string &label, std::vector<int> &seq);

public:
  PmergeMe();
  ~PmergeMe();
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);

  void displayAfter();
  void displayBefore();
  void sortAndMeasure();
  bool parseInput(int ac, char **av);
};

#endif
