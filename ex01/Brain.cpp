/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:06:44 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/18 15:45:20 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "Brain" << " default constructor called!" << std::endl;
  _ideas = new std::string[100];
}

Brain::Brain(const Brain& src) {
  std::cout << "Brain" << " copy constructor called!" << std::endl;
  
}

Brain& Brain::operator=(const Brain& src) {
  std::cout << "Brain" << " copy assigment constructor called!" << std::endl;
}

Brain::~Brain() {
  std::cout << "Brain" << " default destructor called!" << std::endl;
  delete [] _ideas;
}