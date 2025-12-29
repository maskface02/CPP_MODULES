/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                            :::      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:48:13 by zatais            #+#    #+#             */
/*   Updated: 2025/12/29 00:28:19 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
  private:
    std::string ideas[100];

  public:
    Brain();
    Brain(const Brain& otherObj);
    Brain& operator=(const Brain& otherObj);
    ~Brain();
};

#endif
