/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:47:27 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 21:40:19 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

#include "Brain.hpp"

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
  std::cout << "[Dog] " << _type << " copy assignment constructor called!"
            << std::endl;
  Animal::operator=(src);
  *_brain = *src._brain;
  return *this;
}

Dog::~Dog() {
  std::cout << "[Dog] " << _type << " default destructor called!" << std::endl;
  delete _brain;
}

void Dog::makeSound() const { std::cout << "Woof" << std::endl; }