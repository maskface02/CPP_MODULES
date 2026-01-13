/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   AForm.cpp                                            :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2026/01/09 16:17:44 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2026/01/12 17:24:20 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), isSigned(false), reqSignGrade(150) ,reqGradeToExec(150) {}

AForm::AForm(const AForm& otherObj): name(otherObj.name), isSigned(otherObj.isSigned), reqSignGrade(otherObj.reqSignGrade), reqGradeToExec(otherObj.reqGradeToExec) {}

AForm::AForm(const std::string n, const int rsg, const int rgte): name(n),  isSigned(false), reqSignGrade(rsg) , reqGradeToExec(rgte) {
  if (reqSignGrade < 1 || reqGradeToExec < 1)
    throw GradeTooHighException();
  if (reqSignGrade > 150 || reqGradeToExec > 150)
    throw GradeTooLowException();
}

AForm& AForm::operator=(const AForm& otherObj) {
  if (this != &otherObj)
    isSigned = otherObj.isSigned;
  return *this;
}

AForm::~AForm() {}

/***************************************************************************************************/

const char* AForm::GradeTooHighException::what() const throw() {return "Grade is too high!";}

const char* AForm::GradeTooLowException::what() const throw() {return "Grade is too low!";}

/***************************************************************************************************/

void	AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > reqSignGrade)
		throw (AForm::GradeTooLowException());
	else
		this->isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const {
  if (!isSigned)
  {
    std::cout << name <<" form not signed" << std::endl;
  }
  if (executor.getGrade() > reqGradeToExec)
    throw GradeTooLowException();
  executeFormAction();
}

std::ostream	&operator<<(std::ostream &out, AForm const &form) {
	return out << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade();
}

/*****************************************************************************************************************************************************************/

bool AForm::getIsSigned() const {return isSigned;}

std::string AForm::getName() const{return name;}

int AForm::getSignGrade() const {return reqSignGrade;}

int AForm::getExecGrade() const {return reqGradeToExec;}
