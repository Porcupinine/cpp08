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
		for (auto value : vec){
			std::cout<<value<<", ";
		}
		try{
			int target = 9;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(vec, target);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			int target = 99;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(vec, target);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
	}
	{
		std::cout<<"\n-----Array----\n";
		std::array<int, 7> arr {0, 22 ,6 ,7 ,8, 9 ,6};
		for (auto value : arr){
			std::cout<<value<<", ";
		}
		try{
			int target = 9;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(arr, target);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			int target = 99;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(arr, target);
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
		for (auto value : lis){
			std::cout<<value<<", ";
		}
		try{
			int target = 9;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(lis, target);
			std::cout <<target<< "Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
		try{
			int target = 99;
			std::cout<<"\ntarget = "<<target<<"\n";
			easyfind(lis, target);
			std::cout <<"Target found!\n";
		}
		catch(const std::exception &ex){
			std::cout<<ex.what();
		}
	}
}
