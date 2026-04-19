/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 18:18:25 by zatais            #+#    #+#             */
/*   Updated: 2026/03/29 18:18:25 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _deqTime(0), _vecTime(0) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) { static_cast<void>(other); }

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
  static_cast<void>(other);
  return *this;
}

/********************************************************************************************/

bool PmergeMe::parseInput(int ac, char **av) {
  int i = 0;

  while (++i < ac) {
    std::string arg = av[i];
    if (!_isValidNumber(arg))
      return false;

    long val = atol(arg.c_str());
    if (val > INT_MAX || val < 0)
      return false;

    if (find(_origVec.begin(), _origVec.end(), val) != _origVec.end())
      return false;

    _origVec.push_back(val);
    _origDeq.push_back(val);
  }
  return true;
}

bool PmergeMe::_isValidNumber(std::string &str) {
  if (str.empty())
    return false;

  for (size_t i = 0; i < str.size(); i++)
    if (!isdigit(str[i]))
      return false;
  return true;
}

void PmergeMe::displayBefore() { _printVec("Before:", _origVec); }

void PmergeMe::displayAfter() {
  _printVec("After: ", _sortedVec);
  std::cout << "Time to process a range of " << _origVec.size()
            << " elements with std::vector : " << _vecTime << " us"
            << std::endl;
  std::cout << "Time to process a range of " << _origDeq.size()
            << " elements with std::deque : " << _deqTime << " us" << std::endl;
}

void PmergeMe::_printVec(const std::string &label, std::vector<int> &seq) {
  std::cout << label;
  size_t limit = seq.size();
  if (seq.size() > 30)
    limit = 15;
  for (size_t i = 0; i < limit; i++)
    std::cout << " " << seq[i];
  if (seq.size() > 30) {
    std::cout << " [...]";
    for (size_t i = seq.size() - 15; i < seq.size(); i++)
      std::cout << " " << seq[i];
  }
  std::cout << std::endl;
}

std::vector<int> PmergeMe::_generateJacobsthal(int n) {
  std::vector<int> result;

  result.push_back(1);
  int prev = 1;
  int a = 1;
  int b = 3;

  while (b <= n) {
    result.push_back(b);
    for (int i = b - 1; i > prev; --i)
      result.push_back(i);
    prev = b;
    int next = b + 2 * a;
    a = b;
    b = next;
  }

  for (int i = n; i > prev; --i)
    result.push_back(i);

  return result;
}

int PmergeMe::_binaryInsertDeq(std::deque<int> &main, int elem, int high) {
  int low = 0;
  if (high > (int)main.size())
    high = main.size();

  while (low < high) {
    int mid = low + (high - low) / 2;
    if (main[mid] < elem)
      low = mid + 1;
    else
      high = mid;
  }
  main.insert(main.begin() + low, elem);
  return low;
}

std::deque<int> PmergeMe::_fordJohnsonDeq(std::deque<int> container) {
  std::deque<int> deqA;
  std::deque<int> deqB;
  std::deque<int> sortedB;
  std::deque<int> mainChain;
  int oddElem = -1;
  size_t n = container.size();

  if (n == 1)
    return container;
  if (n == 2) {
    if (container[0] > container[1])
      std::swap(container[0], container[1]);
    return container;
  }

  if (n % 2 != 0)
    oddElem = container[n - 1];

  for (size_t i = 0; i + 1 < n; i += 2) {
    if (container[i] >= container[i + 1]) {
      deqA.push_back(container[i]);
      deqB.push_back(container[i + 1]);
    } else {
      deqB.push_back(container[i]);
      deqA.push_back(container[i + 1]);
    }
  }

  std::deque<int> sortedA = _fordJohnsonDeq(deqA);

  for (size_t i = 0; i < sortedA.size(); i++) {
    for (size_t j = 0; j < deqA.size(); j++) {
      if (deqA[j] == sortedA[i]) {
        sortedB.push_back(deqB[j]);
        break;
      }
    }
  }

  mainChain.push_back(sortedB[0]);
  for (size_t i = 0; i < sortedA.size(); i++)
    mainChain.push_back(sortedA[i]);

  std::deque<int> pendChain;
  for (size_t i = 1; i < sortedB.size(); i++)
    pendChain.push_back(sortedB[i]);
  if (oddElem != -1)
    pendChain.push_back(oddElem);

  std::vector<int> order = _generateJacobsthal(pendChain.size());

  size_t numPairs = sortedA.size();
  size_t numPend = pendChain.size();
  std::vector<int> partnerIdx(numPend);

  for (size_t j = 0; j < numPend; j++) {
    if (j < numPairs - 1)
      partnerIdx[j] = j + 2;
    else
      partnerIdx[j] = INT_MAX;
  }

  for (size_t i = 0; i < order.size(); i++) {
    int idx = order[i] - 1;
    if (idx >= 0 && idx < static_cast<int>(pendChain.size())) {
      int pos = _binaryInsertDeq(mainChain, pendChain[idx], partnerIdx[idx]);
      for (size_t j = 0; j < pendChain.size(); j++)
        if (partnerIdx[j] != INT_MAX && partnerIdx[j] >= pos)
          partnerIdx[j]++;
    }
  }

  return mainChain;
}

int PmergeMe::_binaryInsertVec(std::vector<int> &main, int elem, int high) {
  int low = 0;

  if (high == INT_MAX)
    high = main.size();
  while (low < high) {
    int mid = low + (high - low) / 2;
    if (main[mid] < elem)
      low = mid + 1;
    else
      high = mid;
  }
  main.insert(main.begin() + low, elem);
  return low;
}

std::vector<int> PmergeMe::_fordJohnsonVec(std::vector<int> container) {
  size_t n;
  std::vector<int> vecA;
  std::vector<int> vecB;
  int oddElem = -1;
  std::vector<int> sortedA;
  std::vector<int> sortedB;
  std::vector<int> mainChain;

  n = container.size();
  if (n == 1)
    return container;
  if (n == 2) {
    if (container[0] > container[1])
      std::swap(container[0], container[1]);
    return container;
  }

  if (n % 2 != 0)
    oddElem = container[n - 1];

  for (size_t i = 0; i + 1 < n; i += 2) {
    if (container[i] >= container[i + 1]) {
      vecA.push_back(container[i]);
      vecB.push_back(container[i + 1]);
    } else {
      vecA.push_back(container[i + 1]);
      vecB.push_back(container[i]);
    }
  }

  sortedA = _fordJohnsonVec(vecA);
  for (size_t i = 0; i < sortedA.size(); i++) {
    for (size_t j = 0; j < vecA.size(); j++) {
      if (vecA[j] == sortedA[i]) {
        sortedB.push_back(vecB[j]);
        break;
      }
    }
  }

  mainChain.push_back(sortedB[0]);
  for (size_t i = 0; i < sortedA.size(); i++)
    mainChain.push_back(sortedA[i]);

  std::vector<int> pendChain;
  for (size_t i = 1; i < sortedB.size(); i++)
    pendChain.push_back(sortedB[i]);
  if (oddElem != -1)
    pendChain.push_back(oddElem);

  std::vector<int> order = _generateJacobsthal(pendChain.size());

  size_t numPairs = sortedA.size();
  size_t numPend = pendChain.size();
  std::vector<int> partnerIdx(numPend);

  for (size_t j = 0; j < numPend; j++) {
    if (j < numPairs - 1)
      partnerIdx[j] = j + 3;
    else
      partnerIdx[j] = INT_MAX;
  }

  for (size_t i = 0; i < order.size(); i++) {
    int idx = order[i] - 1;
    if (idx >= 0 && idx < static_cast<int>(pendChain.size())) {
      int pos = _binaryInsertVec(mainChain, pendChain[idx], partnerIdx[idx]);
      for (size_t j = 0; j < pendChain.size(); j++)
        if (partnerIdx[j] != INT_MAX && partnerIdx[j] >= pos)
          partnerIdx[j]++;
    }
  }

  return mainChain;
}

void PmergeMe::sortAndMeasure() {
  timeval start, end;

  gettimeofday(&start, NULL);
  _sortedVec = _fordJohnsonVec(_origVec);
  gettimeofday(&end, NULL);
  _vecTime = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec);

  gettimeofday(&start, NULL);
  _sortedDeq = _fordJohnsonDeq(_origDeq);
  gettimeofday(&end, NULL);
  _deqTime = (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_usec - start.tv_usec);
}
