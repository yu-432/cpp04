/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:08:12 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 17:56:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal() : _type("Animal") {
  std::cout << "Animal " << _type << " default constructor called!" << std::endl;
}

Animal::Animal(const Animal& src) {
  std::cout << "Animal " << _type << " copy constructor called!" << std::endl;
  *this = src;
}

Animal& Animal::operator=(const Animal& src) {
  std::cout << "Animal " << _type << " copy assigment constructor called!" << std::endl;
  if (this != &src) {
    _type = src._type;
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal " << _type << " default destructor called!" << std::endl;
}

// void Animal::makeSound() const { std::cout << "!!!" << std::endl; }

const std::string& Animal::getType() const { return _type; }
