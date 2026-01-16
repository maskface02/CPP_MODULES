/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:27:37 by zatais            #+#    #+#             */
/*   Updated: 2026/01/11 16:27:37 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string t): AForm("ShrubberyCreationForm", 145, 137), target(t) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& otherObj): AForm(otherObj), target(otherObj.target){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& otherObj){
  if (this != &otherObj)
    target = otherObj.target;
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::executeFormAction() const {
  std::string filename = target + "_shrubbery";
  std::ofstream outfile(filename.c_str());
  
  if (!outfile.is_open())
  {
    std::cout << "Error: Could not create file " << filename << std::endl;
    return;
  }

  outfile << "       ###" << std::endl;
  outfile << "      #o###" << std::endl;
  outfile << "    #####o###" << std::endl;
  outfile << "   #o#\\#|#/###" << std::endl;
  outfile << "    ###\\|/#o#" << std::endl;
  outfile << "     # }|{  #" << std::endl;
  outfile << "       }|{" << std::endl;
  outfile << std::endl;
  outfile << "      @@@@" << std::endl;
  outfile << "     @@@@@@" << std::endl;
  outfile << "    @@@@@@@@" << std::endl;
  outfile << "   @@@@@@@@@@@" << std::endl;
  outfile << "  @@@@@@@@@@@@@" << std::endl;
  outfile << "       ||" << std::endl;
  outfile << "       ||" << std::endl;

  std::cout << filename <<" has been Created" << std::endl;
}
