/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   RobotomyRequestForm.hpp                              :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/12 19:56:03 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 19:56:03 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
  private:
    std::string target;

  protected:
    void executeFormAction() const;

  public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string t);
    RobotomyRequestForm(const RobotomyRequestForm& otherObj);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& otherObj);
};

#endif
