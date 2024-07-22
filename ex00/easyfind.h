/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/22 14:39:37 by laura         #+#    #+#                 */
/*   Updated: 2024/07/22 14:39:37 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//A first easy exercise is the way to start off on the right foot.
//Write a function template easyfind that accepts a type T. It takes two parameters.
//The first one has type T and the second one is an integer.
//Assuming T is a container of integers, this function has to find the first occurrence
//		of the second parameter in the first parameter.
//If no occurrence is found, you can either throw an exception or return an error value
//		of your choice. If you need some inspiration, analyze how standard containers behave.
//Of course, implement and turn in your own tests to ensure everything works as expected.
//You don’t have to handle associative containers.

//should I check if the template

#ifndef CPP8_EASYFIND_H
#define CPP8_EASYFIND_H

#include <algorithm>
#include <iostream>

template <typename T>
int easyfind(T& con, int target) {
	if (std::find(con.begin(), con.end(), target) != con.end()) {
		return 0;
	}
	std::cout<<target<<" can't be found!\n";
	return 1;
}

#endif //CPP8_EASYFIND_H
