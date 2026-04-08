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
# define PMERGEME_HPP

# include <deque>
# include <vector>
# include <string>
# include <climits>
# include <iostream>
# include <algorithm>
# include <sys/time.h>

# include <sstream>
# include <iomanip>
# include <cstdlib>
# include <cerrno>

class PmergeMe {
private:
	bool				      _parsed;
	double				    _deqTime;
	double				    _vecTime;
	std::vector<int>	_origVec;
	std::deque<int>		_origDeq;
	std::vector<int>	_sortedVec;
	std::deque<int>		_sortedDeq;

	std::vector<int>  _generateJacobsthal(int n) const;
	bool				      _isValidNumber(const std::string &str) const;
	std::deque<int>		_fordJohnsonDeq(std::deque<int> container) const;
	std::vector<int>	_fordJohnsonVec(std::vector<int> container) const;
	void				      _binaryInsertDeq(std::deque<int> &main, int elem) const;
	void				      _binaryInsertVec(std::vector<int> &main, int elem) const;
	void				      _printVec(const std::string &label, const std::vector<int> &seq) const;

public:
	PmergeMe();
	~PmergeMe();
  PmergeMe(const PmergeMe& other);
  PmergeMe&         operator=(const PmergeMe& other);

	void				      sortAndMeasure();
	void				      displayAfter() const;
	void				      displayBefore() const;
	bool				      parseInput(int ac, char **av);
};

#endif // !PMERGEME_HPP
