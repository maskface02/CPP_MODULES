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

#ifndef ITER_HPP
#define ITER_HPP
#include <cstddef>

template<typename T>

void iter(T* arr, const size_t arrLen, void (*f)(T& arrAtIdx)) {

  for (size_t i = 0; i < arrLen ; i++)
    f(arr[i]);
}

#endif
