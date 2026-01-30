/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 15:37:56 by zatais            #+#    #+#             */
/*   Updated: 2026/01/30 15:37:56 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>
#include <stdexcept>
template<typename T>
class Array {
  private:
    T       *arr;
    int  _size;

  public:
    Array();
    ~Array();
    Array(unsigned int s);
    Array(const Array& otherObj);
    Array& operator=(const Array& otherObj);

    T& operator[](int i);
    const T& operator[](int i) const;

    int size() const;
};

/******************************************************************************************/

template <typename T>
Array<T>::Array() : arr(NULL), _size(0) {}


template <typename T>
Array<T>::Array(unsigned int s) : arr(new T[s]), _size(s) {}


template <typename T>
Array<T>::Array(const Array& otherObj) : arr(new T[otherObj._size]), _size(otherObj._size) {
  int i = -1;

  while (++i < _size)
    arr[i] = otherObj.arr[i];
}

template <typename T>
Array<T>::~Array() {delete[] arr;}

/****************************************************/

template <typename T>
Array<T>& Array<T>::operator=(const Array& otherObj) {
  int i = -1;

  if (this != &otherObj)
  {
    delete[] arr;
    arr = new T[otherObj._size];
    while (++i < otherObj._size)
      arr[i] = otherObj.arr[i];
    _size = otherObj._size;
  }
  return *this;
}

template <typename T>
T& Array<T>::operator[](int i) {
  if (i >= _size || i < 0)
    throw std::out_of_range("index is out of bounds");
  return arr[i];
}

template <typename T>
const T& Array<T>::operator[](int i) const {
  if (i >= _size || i < 0)
    throw std::out_of_range("index is out of bounds");
  return arr[i];
}

/**************************************************/

template <typename T>
int Array<T>::size() const {return _size;}

#endif
