/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:38:12 by zatais            #+#    #+#             */
/*   Updated: 2026/01/22 09:38:12 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& otherObj) {static_cast<void>(otherObj);}

Serializer& Serializer::operator=(const Serializer& otherObj) {static_cast<void>(otherObj);return *this;}

Serializer::~Serializer() {}

/********************************************************************************************/
 uintptr_t Serializer::serialize(Data *ptr) {return (reinterpret_cast<uintptr_t>(ptr));}

 Data* Serializer::deserialize(uintptr_t raw) {return (reinterpret_cast<Data*>(raw));}
