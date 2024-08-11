/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/11 15:59:00 by laura         #+#    #+#                 */
/*   Updated: 2024/08/11 15:59:00 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP8_MUTANTSTACK_H
#define CPP8_MUTANTSTACK_H


#include <stack>
#include <vector>

template <typename  T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() = default;
	~MutantStack() = default;
	MutantStack(const MutantStack& cp) = default;
	MutantStack& operator=(const MutantStack& cp) = default;

	using iterator = typename std::stack<T>::container_type::iterator;

	iterator begin();
	iterator end();
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}


#endif //CPP8_MUTANTSTACK_H
