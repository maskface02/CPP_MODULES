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
#include <cstddef>

PmergeMe::PmergeMe() : _deqTime(0), _vecTime(0){}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other){static_cast<void>(other);}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){static_cast<void>(other); return *this;}

/********************************************************************************************/

bool PmergeMe::parseInput(int ac, char **av) {
	for (int i = 1; i < ac; i++) {
		std::string arg = av[i];
		if (!_isValidNumber(arg))
			return false;
		long val = atol(arg.c_str());
		if (val > INT_MAX || val < 0)
			return false;
		_origVec.push_back(val);
		_origDeq.push_back(static_cast<int>(val));
	}
	return true;
}

bool PmergeMe::_isValidNumber(std::string &str) {
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.size(); i++) {
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void PmergeMe::displayBefore() {
	_printVec("Before:", _origVec);
}

void PmergeMe::displayAfter() {
	_printVec("After: ", _sortedVec);
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << _origVec.size() << " elements with std::vector : " << _vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << _origDeq.size() << " elements with std::deque : " << _deqTime << " us" << std::endl;
}

// void PmergeMe::_printVec(const std::string &label, std::vector<int> &seq) {
//   size_t n;
//
//   n = seq.size();
//   if (n > 10)
//     n = 10;
// 	std::cout << label;
// 	for (size_t i = 0; i < ; i++)
// 		std::cout << " " << seq[i];
// 	// if (seq.size() > 4)
// 		// std::cout << " [...]";
// 	std::cout << std::endl;
// }

void PmergeMe::_printVec(const std::string &label,  std::vector<int> &seq) {
	std::cout << label;
	size_t limit = seq.size();
	if (seq.size() > 30)
		limit = 15;
	for (size_t i = 0; i < limit; i++) {
		std::cout << " " << seq[i];
	}
	if (seq.size() > 30) {
		std::cout << " [...]";
		for (size_t i = seq.size() - 5; i < seq.size(); i++)
			std::cout << " " << seq[i];
	}
	std::cout << std::endl;
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

std::vector<int> PmergeMe::_generateJacobsthal(int n) {
	int a = 1;
  int b = 3;
	std::vector<int>	j;

	if (n <= 0)
		return j;
	std::vector<int>	jacob;
	if (n >= 1)
		jacob.push_back(1);
	while (b < n) {
		jacob.push_back(b);
		int next = b + 2 * a;
		a = b;
		b = next;
	}

	for (size_t i = 0; i < jacob.size(); i++) {
		if (jacob[i] <= n)
			j.push_back(jacob[i]);
	}

	bool used[3001] = {false};
	for (size_t i = 0; i < j.size(); i++)
		used[j[i]] = true;
	for (int i = n; i >= 1; i--) {
		if (!used[i])
			j.push_back(i);
	}

	return j;
}

std::vector<int> PmergeMe::_fordJohnsonVec(std::vector<int> container) {
	size_t           n;
	std::vector<int>  vecA;
	std::vector<int>  vecB;
	int               oddElem = -1; 
  std::vector<int>  sortedA;
	std::vector<int>  sortedB;

  n = container.size();
	if (n < 1)
		return container;
	if (n == 2)
  {
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return container;
	}

	if (n % 2 != 0)
		oddElem = container[n - 1];

	for (size_t i = 0; i + 1 < n; i += 2)
  {
		if (container[i] >= container[i + 1])
    {
			vecA.push_back(container[i]);
			vecB.push_back(container[i + 1]);
		}
    else
    {
			vecA.push_back(container[i + 1]);
			vecB.push_back(container[i]);
		}
	}

	sortedA = _fordJohnsonVec(vecA);
	for (size_t i = 0; i < sortedA.size(); i++)
  {
		for (size_t j = 0; j < vecA.size(); j++)
    {
			if (vecA[j] == sortedA[i])
      {
				sortedB.push_back(vecB[j]);
				break;
			}
		}
	}
	std::vector<int> mainChain;
	mainChain.push_back(sortedB[0]);
	for (size_t i = 0; i < sortedA.size(); i++)
		mainChain.push_back(sortedA[i]);

	std::vector<int> pendChain;
	for (size_t i = 1; i < sortedB.size(); i++)
		pendChain.push_back(sortedB[i]);
	if (oddElem != -1)
		pendChain.push_back(oddElem);

	std::vector<int> order = _generateJacobsthal(pendChain.size());

	for (size_t i = 0; i < order.size(); i++) {
		int idx = order[i] - 1;
    if (idx >= 0 && idx < (int)pendChain.size())
			_binaryInsertVec(mainChain, pendChain[idx]);
	}

	return mainChain;
}

void PmergeMe::_binaryInsertVec(std::vector<int> &main, int elem) {
	int low = 0;
	int high = main.size();

	while (low < high) {
		int mid = low + (high - low) / 2;
		if (main[mid] < elem)
			low = mid + 1;
		else
			high = mid;
	}
	main.insert(main.begin() + low, elem);
}

std::deque<int> PmergeMe::_fordJohnsonDeq(std::deque<int> container)  {
	size_t n = container.size();
	if (n <= 1)
		return container;
	if (n == 2) {
		if (container[0] > container[1])
			std::swap(container[0], container[1]);
		return container;
	}

	std::deque<int> deqA;
	std::deque<int> deqB;
	bool hasOdd = (n % 2 != 0);
	int oddElem = 0;
	if (hasOdd)
		oddElem = container[n - 1];

	for (size_t i = 0; i + 1 < n; i += 2) {
		if (container[i] >= container[i + 1]) {
			deqA.push_back(container[i]);
			deqB.push_back(container[i + 1]);
		} else {
			deqA.push_back(container[i + 1]);
			deqB.push_back(container[i]);
		}
	}

	std::deque<int> sortedA = _fordJohnsonDeq(deqA);

	std::deque<int> sortedB;
	for (size_t i = 0; i < sortedA.size(); i++) {
		for (size_t j = 0; j < deqA.size(); j++) {
			if (deqA[j] == (int)sortedA[i]) {
				sortedB.push_back(deqB[j]);
				break;
			}
		}
	}

	std::deque<int> mainChain;
	mainChain.push_back(sortedB[0]);
	for (size_t i = 0; i < sortedA.size(); i++)
		mainChain.push_back(sortedA[i]);

	std::deque<int> pendChain;
	for (size_t i = 1; i < sortedB.size(); i++)
		pendChain.push_back(sortedB[i]);
	if (hasOdd)
		pendChain.push_back(oddElem);

	std::vector<int> order = _generateJacobsthal(pendChain.size());

	for (size_t i = 0; i < order.size(); i++) {
		int idx = order[i] - 1;
		if (idx >= 0 && idx < (int)pendChain.size()) {
			_binaryInsertDeq(mainChain, pendChain[idx]);
		}
	}

	return mainChain;
}

void PmergeMe::_binaryInsertDeq(std::deque<int> &main, int elem)  {
	int low = 0;
	int high = main.size();

	while (low < high) {
		int mid = low + (high - low) / 2;
		if (main[mid] < elem)
			low = mid + 1;
		else
			high = mid;
	}
	main.insert(main.begin() + low, elem);
}
