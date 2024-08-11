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
typename T::iterator easyfind(T& con, int target) {
	typename T::iterator it = std::find(con.begin(), con.end(), target);
	if ( it != con.end()) {
		return it;
	}
	throw std::invalid_argument("Target not found!\n");
}

#endif //CPP8_EASYFIND_H
