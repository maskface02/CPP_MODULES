/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                            :::      ::::::::   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:44:30 by zatais            #+#    #+#             */
/*   Updated: 2026/01/12 17:38:32 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
  private:
    std::string target;
  protected:
    void executeFormAction() const;
  public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string t);
    ShrubberyCreationForm(const ShrubberyCreationForm& otherObj);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& otherObj);

};

#endif
