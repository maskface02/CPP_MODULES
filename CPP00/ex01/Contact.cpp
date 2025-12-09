/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Contact.cpp                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:18 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:18 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string name) {
    firstName = name;
}

void Contact::setLastName(std::string name) {
    lastName = name;
}

void Contact::setNickname(std::string nick) {
    nickname = nick;
}

void Contact::setPhoneNumber(std::string phone) {
    phoneNumber = phone;
}

void Contact::setDarkestSecret(std::string secret) {
    darkestSecret = secret;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickname() {
    return nickname;
}

std::string Contact::getPhoneNumber() {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}

