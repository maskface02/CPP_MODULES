/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:03:40 by zatais            #+#    #+#             */
/*   Updated: 2026/02/12 16:04:04 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK
#define MUTANTSTACK

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  MutantStack();
  virtual ~MutantStack();
  MutantStack(const MutantStack<T> &otherOBj);
  MutantStack<T> &operator=(const MutantStack<T> &otherOBj);

  typedef typename std::stack<T>::container_type::iterator iterator;
  typedef typename std::stack<T>::container_type::const_iterator const_iterator;
  iterator begin();
  const_iterator begin() const;
  iterator end();
  const_iterator end() const;
};

template <typename T> MutantStack<T>::MutantStack() {}

template <typename T> MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &otherOBj)
    : std::stack<T>(otherOBj) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &otherOBj) {
  std::stack<T>::operator=(otherOBj);
  return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
  return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const {
  return std::stack<T>::c.begin();
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end() {
  return std::stack<T>::c.end();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const {
  return std::stack<T>::c.end();
}

#endif // !MutantStack
