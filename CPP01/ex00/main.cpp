/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*   By: zatais <zatais@student.1337.ma>              +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*   Created: 2025/12/08 23:20:54 by zatais       +#+#+#+#+#+   +#+           */
/*   Updated: 2025/12/08 23:20:54 by zatais            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::cout << "***Stack***" << std::endl;
    randomChump("\nStackZombie");
    std::cout << "StackZombie was destroyed immediately after announcing" << std::endl;
   
    std::cout << "\n***Heap***" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    std::cout << "HeapZombie still exists" << std::endl;
    heapZombie->announce();
    std::cout << "\nDeleting HeapZombie" << std::endl;
    delete heapZombie;
    std::cout << std::endl;
    
    Zombie* zombie1 = newZombie("Alice");
    Zombie* zombie2 = newZombie("Bob");
    
    zombie1->announce();
    zombie2->announce();
    
    std::cout << "\nCleaning up" << std::endl;
    delete zombie1;
    delete zombie2;
}
