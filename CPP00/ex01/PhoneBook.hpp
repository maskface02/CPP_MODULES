#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
private:
    Contact contacts[8];
    int currentIndex;
    int contactCount;

    std::string truncateString(std::string str, size_t width) const;
    void displayContactRow(int index, Contact contact);
    std::string checkInput(std::string input);
    int ftAtoi(std::string str);
    int isNumber(std::string str); 

public:
    PhoneBook();

    void addContact();
    void searchContact();
    void displayAllContacts();
};

#endif
