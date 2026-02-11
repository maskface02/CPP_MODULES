/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:15:55 by zatais            #+#    #+#             */
/*   Updated: 2026/02/08 17:15:55 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <climits>
#include <stdexcept>
#include <string>
#include <vector>

class Span {
private:
  size_t maxSize;
  std::vector<int> numbers;

public:
  Span();
  ~Span();
  Span(int size);
  Span(const Span &otherObj);
  Span &operator=(const Span &otherObj);

  void addNumber(int);
  void addMultiNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
  int shortestSpan() const;
  int longestSpan() const;
};

#endif // ! SPAN_HPP
