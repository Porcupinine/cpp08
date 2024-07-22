/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/22 16:35:44 by laura         #+#    #+#                 */
/*   Updated: 2024/07/22 16:35:44 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <vector>
#include <array>
#include <list>

int main () {
	{
		std::vector<int> vec;
		vec.push_back(0);
		vec.push_back(9);
		vec.push_back(10);
		vec.push_back(5);
		vec.push_back(6);

		std::cout << easyfind(vec, 9) << "\n";
		std::cout << easyfind(vec, 99) << "\n";
	}
	{
		std::array<int, 7> arr {0, 22 ,6 ,7 ,8, 9 ,6};

		std::cout << easyfind(arr, 9) << "\n";
		std::cout << easyfind(arr, 99) << "\n";
	}
	{
		std::list<int> lis;
		lis.push_back(8);
		lis.push_back(86);
		lis.push_back(9);
		lis.push_back(55);

		std::cout << easyfind(lis, 9) << "\n";
		std::cout << easyfind(lis, 99) << "\n";
	}
}
