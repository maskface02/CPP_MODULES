/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:36:58 by zatais            #+#    #+#             */
/*   Updated: 2026/02/11 21:36:58 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"
int main()
{ 
  std::cout << "***MutantStack***" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  MutantStack<int>::const_iterator cit = mstack.begin();
  ++cit;
  --cit;
  while (it != ite)
  { 
    std::cout << "normal "<< *it << std::endl;
    std::cout << "const "<< *cit << std::endl;
    ++it;
    ++cit;
  }
  std::cout << "***List***"<< std::endl;
  std::list<int> l;
  l.push_back(5);
  l.push_back(17);
  std::cout << l.back() << std::endl;
  l.pop_back();
  std::cout << l.size() << std::endl;
  l.push_back(3);
  l.push_back(5);
  l.push_back(737);
  l.push_back(0);

  std::list<int>::iterator lit = l.begin();
  std::list<int>::iterator lite = l.end();
  ++lit;
  --lit;
  std::list<int>::const_iterator lcit = l.begin();
  ++lcit;
  --lcit;
  while (lit != lite)
  { 
    std::cout << "normal "<< *lit << std::endl;
    std::cout << "const "<< *lcit << std::endl;
    ++lit;
    ++lcit;
  }
  return 0;
}
