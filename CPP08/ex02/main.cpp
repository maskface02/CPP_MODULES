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
#include "MutantStack.hpp"
int main()
{ 
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
    mstack.pop();
    ++it;
    ++cit;
  }
 // *cit = 10; 
  return 0;
}
