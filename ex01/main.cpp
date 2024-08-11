/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/29 15:30:32 by laura         #+#    #+#                 */
/*   Updated: 2024/07/29 15:30:32 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <array>
#include "Span.h"

int main () {
	{
		Span x = Span(9);
		x.addNumber(-8);
		x.addNumber(-22);
		x.addNumber(-5);
		x.addNumber(-10);
		x.addNumber(-99);
		x.addNumber(-76);
		x.addNumber(-12);
		x.addNumber(-4);

		std::vector<int> vecCopy = x.getData();
		std::sort(vecCopy.begin(), vecCopy.end());
		for (size_t it = 0; it < x.getSize(); it++) {
			std::cout << vecCopy[it] << "\n";
		}
		std::cout << "longestspam: " << x.longestSpan() << "\n";
		std::cout << "smalestspam: " << x.shortestSpan() << "\n";
	}
	{
		Span y(10);
		std::array<int, 10> sample = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
		y.addNumber(sample.begin(), sample.end());
		for (size_t it = 0; it < y.getSize(); it++) {
			std::cout << y.getData()[it] << "\n";
		}
	}
}
