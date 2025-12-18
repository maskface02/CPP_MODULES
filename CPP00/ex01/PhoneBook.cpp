/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.cpp                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:29 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:29 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentIndex(0), contactCount(0) {}

std::string PhoneBook::truncateString(std::string str, size_t width) const {

    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void PhoneBook::displayContactRow(int index, Contact contact){

    std::cout << "|"<< std::setw(10) << index;
    std::cout << "|"<< std::setw(10) << truncateString(contact.getFirstName(), 10);
    std::cout << "|"<< std::setw(10) << truncateString(contact.getLastName(), 10);
    std::cout << "|"<< std::setw(10) << truncateString(contact.getNickname(), 10);
    std::cout << "|"<< std::endl;
}

std::string PhoneBook::checkInput(std::string input) {
  for(size_t i = 0; i < input.length(); i++) {
    if (!isprint(input[i]))
      return "";
  }
  return input;
}

int PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cout << std::endl;
        return 1;
    }
    newContact.setFirstName(checkInput(input));

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cout << std::endl;
        return 1;
    }
    newContact.setLastName(checkInput(input));

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cout << std::endl;
        return 1;
    }
    newContact.setNickname(checkInput(input));

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cout << std::endl;
        return 1;
    }
    newContact.setPhoneNumber(checkInput(input));

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (std::cin.eof()) {
        std::cout << std::endl;
        return 1;
    }
    newContact.setDarkestSecret(checkInput(input));

    contacts[currentIndex] = newContact;
    currentIndex = (currentIndex + 1) % 8;
    if (contactCount < 8)
      contactCount++;
    return 0;
}

void PhoneBook::displayAllContacts(){
    if (!contactCount) {
        std::cout << "Phonebook is empty!" << std::endl;
        return;
    }

    std::cout << "|" << std::left << std::setw(10) << "Index";
    std::cout << "|" << std::left << std::setw(10) << "First Name";
    std::cout << "|" << std::left << std::setw(10) << "Last Name";
    std::cout << "|" << std::left << std::setw(10) << "Nickname";
    std::cout << "|" << std::left << std::endl;
    
    for (int i = 0; i < contactCount; i++)
        displayContactRow(i, contacts[i]);
}

int PhoneBook::atoi(std::string str) {
    int res = 0;
    size_t i = 0;
    while (i < str.length() && isspace(str[i])) i++;
    int negative = 1;
    if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
          negative = -1;
        i++;
    }
    while (i < str.length() && isdigit(str[i])) {
        res = res * 10 + (str[i] - '0');
        if (res > 8)
          return (-1);
        i++;
    }
    return res*negative;
}

int PhoneBook::isNumber(std::string str) {
  size_t i= 0;
  if (str[0] == '-')
      ++i;
  while (i < str.length()) {
    if (!isdigit(str[i]))
      return 0;
    i++;
  }
  return 1;
}

int PhoneBook::searchContact() {
  if (!contactCount) {
        std::cout << "Phonebook is empty!" << std::endl;
        return 0;
  }
  displayAllContacts();

  std::cout << "Enter the index of the contact to display: ";
  std::string input;
  std::getline(std::cin, input);
  
  if (std::cin.eof()) {
      std::cout << std::endl;
      return 1;
  }

  if (checkInput(input).empty()) {
      std::cout << "Invalid input!" << std::endl;
      return 0;
  }

  if (!isNumber(input)) {
      std::cout << "Invalid input!" << std::endl;
      return 0;
  }

  int index = atoi(input);
  if (index < 0 || index >= contactCount) {
      std::cout << "Index out of range!" << std::endl;
      return 0;
  }
  
  std::cout << "\nContact Information:" << std::endl;
  std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
  std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
  std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
  std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
  return 0;
}
