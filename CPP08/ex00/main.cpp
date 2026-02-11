/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:22:42 by zatais            #+#    #+#             */
/*   Updated: 2026/02/06 19:22:42 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found at position: " << std::distance(vec.begin(),it) + 1 << std::endl;
    } catch (std::string err) {
        std::cout << "Error: " << err << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    try {
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found in position: " << std::distance(lst.begin(), it) + 1 << std::endl;
    } catch (std::string err) {
        std::cout << "Error: " << err << std::endl;
    }

    try {
        easyfind(vec, 99);
    } catch (std::string err) {
        std::cout << "Error: " << err << std::endl;
    }
}
