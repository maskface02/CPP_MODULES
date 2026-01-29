/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Base.hpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/23 22:35:14 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/23 22:35:14 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
    virtual ~Base();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
