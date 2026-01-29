/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:32:32 by zatais            #+#    #+#             */
/*   Updated: 2026/01/29 15:32:32 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void addOne(T &a) {
  ++a;
}

int main () {
  int arr[5] = {1, 2, 3, 4, 5};
  char arr2[5] = {'a', 'b', 'c', 'd', 'e'};

  iter(arr, 5, addOne);
  iter(arr2, 5, addOne);
  std::cout << arr[0]<<" " << arr[1] <<" " << arr[2] <<" " << arr[3] <<" " << arr[4] << std::endl;
  std::cout << arr2[0]<<" " << arr2[1] <<" " << arr2[2] <<" " << arr2[3] <<" " << arr2[4] << std::endl;

}
