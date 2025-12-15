/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Harl.hpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@staudent.1337.ma>             +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/15 11:48:23 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/15 11:48:23 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void complain(std::string level);
};

#endif
