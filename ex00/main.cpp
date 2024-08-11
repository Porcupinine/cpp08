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
		std::cout<<"------Vector-----\n";
		std::vector<int> vec;
		vec.push_back(0);
		vec.push_back(9);
		vec.push_back(10);
		vec.push_back(5);
		vec.push_back(6);

		try{
			easyfind(vec, 9);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			easyfind(vec, 99);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
	}
	{
		std::cout<<"\n-----Array----\n";
		std::array<int, 7> arr {0, 22 ,6 ,7 ,8, 9 ,6};

		try{
			easyfind(arr, 9);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			easyfind(arr, 99);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
	}
	{
		std::cout<<"\n-----List-----\n";
		std::list<int> lis;
		lis.push_back(8);
		lis.push_back(86);
		lis.push_back(9);
		lis.push_back(55);

		try{
			easyfind(lis, 9);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			easyfind(lis, 99);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
	}
}
