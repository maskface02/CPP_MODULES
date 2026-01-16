/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PresidentialPardonForm.hpp                           :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/12 18:01:14 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 18:01:14 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
  private:
    std::string target;

  protected:
    void executeAction() const;

  public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string t);
    PresidentialPardonForm(const PresidentialPardonForm& otherObj);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& otherObj);
};

#endif
