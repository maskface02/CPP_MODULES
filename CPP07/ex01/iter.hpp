/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:32:17 by zatais            #+#    #+#             */
/*   Updated: 2026/01/29 15:32:17 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <cstddef>
#include <cstdlib>

template<typename T>

void iter(T* arr, const size_t arrLen, void (*f)(T& arrAtIdx)) {
  size_t i = -1;

  while (++i < arrLen)
    f(arr[i]);
}
