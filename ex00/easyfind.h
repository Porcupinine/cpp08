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
