/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:05:19 by zatais            #+#    #+#             */
/*   Updated: 2026/01/29 15:05:19 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T&b) {
  T tmp = a;
  a = b;
  b = tmp;
}

template<typename T>
T& min(T &a, T &b) {
  return a < b ? a : b;
}

template<typename T>
T& max(T &a, T &b) {
  return a > b ? a : b;
}

#endif
