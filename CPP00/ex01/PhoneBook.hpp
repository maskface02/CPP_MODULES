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

    std::string truncateString(const std::string& str, size_t width) const;
    void displayContactRow(int index, const Contact& contact);

public:
    PhoneBook();

    void addContact();
    void searchContact();
    void displayAllContacts();
};

#endif
