/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:47:27 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 21:12:31 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

Dog::Dog() {
  std::cout << "[Dog] " << _type << " default constructor called!" << std::endl;
  _type = "Dog";
  _brain = new Brain();
}

Dog::Dog(const Dog& src) : Animal(src) {
  std::cout << "[Dog] " << _type << " copy constructor called!" << std::endl;
  _brain = new Brain(*src._brain);
}

Dog& Dog::operator=(const Dog& src) {
  std::cout << "[Dog] " << _type << " copy assigment constructor called!" << std::endl;
  if (this != &src) {
    _type = src._type;
  }
  _brain = src._brain;
  return *this;
}

Dog::~Dog() {
  std::cout << "[Dog] " << _type << " default destructor called!" << std::endl;
  delete _brain;
}

void Dog::makeSound() const{
  std::cout << "Woof" << std::endl;
}