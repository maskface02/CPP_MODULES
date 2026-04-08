/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zatais <zatais@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:07:59 by zatais            #+#    #+#             */
/*   Updated: 2026/04/02 16:07:59 by zatais           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac <= 1) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	PmergeMe pm;

	if (!pm.parseInput(ac, av)) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	pm.displayBefore();
	pm.sortAndMeasure();
	pm.displayAfter();

	return 0;
}
