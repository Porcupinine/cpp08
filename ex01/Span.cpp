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
#include <algorithm>
#include <climits>
#include <iostream>
#include "Span.h"

Span::Span(unsigned int size) : m_size(size) {
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
	std::sort(m_data.begin(), m_data.end());
	int diff = INT_MAX;
	for (size_t it = 0; it < m_data.size() - 1; it++){
		if((m_data[it+1] - m_data[it]) < diff)
			diff = (m_data[it+1] - m_data[it]);
	}
	return diff;
}

unsigned int Span::longestSpan() {
	std::sort(m_data.begin(), m_data.end());
	int diff = 0;
	for (size_t it = 0; it < m_data.size() - 1; it++){
		if((m_data[it+1] - m_data[it]) > diff) {
			diff = (m_data[it + 1] - m_data[it]);
		}	}
	return diff;
}

size_t Span::getSize() const {
	return m_size;
}

std::vector<int> &Span::getData() {
	return m_data;
}
