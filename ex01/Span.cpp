/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/22 22:57:39 by laura         #+#    #+#                 */
/*   Updated: 2024/07/22 22:57:39 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Span.h"

Span::Span(unsigned int size) : m_size(size) {
}

Span::~Span() {

}

Span::Span(const Span &cp) {
	m_size = cp.m_size;
	std::copy(cp.m_data.begin(), cp.m_data.end(), std::back_inserter(m_data));
}

Span &Span::operator=(const Span &cp) {
	m_size = cp.m_size;
	std::copy(cp.m_data.begin(), cp.m_data.end(), std::back_inserter(m_data));
	return *this;
}

void Span::addNumber(int n) {
	if(m_data.size() < m_size) {
		m_data.push_back(n);
		return;
	}
	throw std::length_error("Full capacity!\n");
}

unsigned int Span::shortestSpan() {
	return 0;
}

unsigned int Span::longestSpan() {
	return 0;
}
