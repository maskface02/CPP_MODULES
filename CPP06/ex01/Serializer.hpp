/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:39:02 by zatais            #+#    #+#             */
/*   Updated: 2026/01/21 20:39:02 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER
#define SERIALIZER
#include <stdint.h>

struct Data {
  char a;
  int b;
  float c;
  double d;
};

class Serializer {
  private:
    Serializer();
    ~Serializer();
    Serializer(const Serializer& otherObj);
    Serializer&         operator=(const Serializer& otherObj);

  public:
    static  Data*       deserialize(uintptr_t raw);
    static  uintptr_t   serialize(Data* ptr);

};
#endif 
