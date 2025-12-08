/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Contact.hpp                                          :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:19:58 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:19:58 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void setFirstName(std::string name);
    void setLastName(std::string name);
    void setNickname(std::string nick);
    void setPhoneNumber(std::string phone);
    void setDarkestSecret(std::string secret);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

#endif
