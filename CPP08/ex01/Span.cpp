/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:25:01 by zatais            #+#    #+#             */
/*   Updated: 2026/02/08 18:25:01 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span(int size): maxSize(size) {
  if (size < 0)
    throw std::out_of_range("Negative Size!");
}

Span::Span(const Span& otherObj) : maxSize(otherObj.maxSize), numbers(otherObj.numbers){}

Span& Span::operator=(const Span& otherObj) {
  if (this != &otherObj)
  {
    maxSize = otherObj.maxSize;
    numbers = otherObj.numbers;
  }
  return *this;
}

Span::~Span() {}

/***************************************************************************************/

void Span::addNumber(int number) {
  if (maxSize == numbers.size())
    throw std::out_of_range("No place to add!");
  numbers.push_back(number);
}

int Span::shortestSpan() const {
  if (numbers.empty() || numbers.size() == 1)
    throw std::out_of_range("No span can be found!");
  
  std::vector<int> sorted = numbers;
  std::sort(sorted.begin(), sorted.end());
  
  int min = INT_MAX;
  int diff = 0;
  for (size_t i = 0; i < sorted.size() - 1 ; i++)
  {
    diff = sorted[i + 1] - sorted[i];
    if (diff < min)
      min = diff;
  }
  return min;
}

int Span::longestSpan() const
{
  if (numbers.empty() || numbers.size() == 1)
    throw std::out_of_range("Span vector has less than 2 values");

  std::vector<int> sorted = numbers;
  std::sort(sorted.begin(), sorted.end());
  int max = sorted.back();
  int min = sorted.front();
  return (max - min);
}

void Span::addMultiNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
  size_t size = static_cast<size_t>(distance(begin, end));
  if ( size > maxSize  || !size)
    throw std::out_of_range("Range issue!!");
  numbers.insert(numbers.begin(), begin, end);
}


