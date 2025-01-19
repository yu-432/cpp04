/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:32:02 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 21:40:25 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

#include "Brain.hpp"

Cat::Cat() {
  std::cout << "[Cat] " << _type << " default constructor called!" << std::endl;
  _type = "Cat";
  _brain = new Brain();
}

Cat::Cat(const Cat& src) : Animal(src) {
  std::cout << "[Cat] " << _type << " copy constructor called!" << std::endl;
  _brain = new Brain(*src._brain);
}

Cat& Cat::operator=(const Cat& src) {
  std::cout << "[Cat] " << _type << " copy assignment constructor called!"
            << std::endl;
  Animal::operator=(src);
  *_brain = *src._brain;
  return *this;
}

Cat::~Cat() {
  std::cout << "[Cat] " << _type << " default destructor called!" << std::endl;
  delete _brain;
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }
