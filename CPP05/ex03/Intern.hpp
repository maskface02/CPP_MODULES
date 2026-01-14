/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:43:02 by zatais            #+#    #+#             */
/*   Updated: 2026/01/14 13:07:22 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern {
  private:
    AForm* makeRobotForm(std::string t);
    AForm* makeShrubberyForm(std::string t);
    AForm* makePresidentialPardonForm(std::string t);

  public:
    Intern();
    ~Intern();
    Intern(const Intern& otherObj);
    Intern& operator=(const Intern& otherObj);

    AForm* makeForm(std::string formName, std::string targetForm);

};
