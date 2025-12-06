#include "PhoneBook.hpp"
#include <memory>

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == std::string::npos)
        return "";
     size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, (last - first + 1));
}

int main() {

    PhoneBook phoneBook;
    std::string command;
    
    std::cout << "Welcome to Your Awesome Phonebook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
    while (true) {
        std::cout << "\nEnter command: ";
        if (!std::getline(std::cin, command)) {
            std::cout << std::endl;
            break;
        }
        command = trim(command);
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT") {
            std::cout << "Goodbye! Your contacts are lost forever!" << std::endl;
            break;
        }
        else if (!command.empty()) {
            std::cout << "Invalid command. Use ADD, SEARCH, or EXIT." << std::endl;
        }
    }
}
