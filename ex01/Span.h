/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/22 17:00:39 by laura         #+#    #+#                 */
/*   Updated: 2024/07/22 17:00:39 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP8_SPAN_H
#define CPP8_SPAN_H

#include <vector>

class Span {
private:
	unsigned int m_size;
	std::vector<int> m_data;

public:
	Span() = delete;
	explicit Span(unsigned int size);
	~Span() = default;
	Span(const Span& cp);
	Span& operator=(const Span& cp);

	size_t getSize() const;
	std::vector<int>& getData();
	void addNumber(int n);

	template<class It>
	void addNumber(It start, It end);

	unsigned int shortestSpan();
	unsigned int longestSpan();
};

template<class It>
void Span::addNumber(It start, It end) {
	for (; start != end; ++start) {
		addNumber(*start);
	}
}


#endif //CPP8_SPAN_H
