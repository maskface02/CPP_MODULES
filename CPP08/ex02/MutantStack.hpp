/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:03:40 by zatais            #+#    #+#             */
/*   Updated: 2026/02/11 22:38:24 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK
#define MUTANTSTACK
 
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  MutantStack();
  virtual ~MutantStack();
  MutantStack(MutantStack const &);
  MutantStack &operator=(MutantStack const &);

  typedef typename std::stack<T>::containter_type::iterator iterator;
  iterator begin();
  iterator end();
};

#endif // !MutantStack
