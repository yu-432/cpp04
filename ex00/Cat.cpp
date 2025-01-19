/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:32:02 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 20:18:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat() {
  std::cout << "[Cat] " << _type << " default constructor called!" << std::endl;
  _type = "Cat";
}

Cat::Cat(const Cat& src) : Animal(src) {
  std::cout << "[Cat] " << _type << " copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
  std::cout << "[Cat] " << _type << " copy assigment constructor called!"
            << std::endl;
  if (this != &src) {
    _type = src._type;
  }
  return *this;
}

Cat::~Cat() {
  std::cout << "[Cat] " << _type << " default destructor called!" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }
