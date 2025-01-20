/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:32:02 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/20 12:12:27 by yooshima         ###   ########.fr       */
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
  std::cout << "[Cat] " << _type << " copy assignment constructor called!"
            << std::endl;
  Animal::operator=(src);
  return *this;
}

Cat::~Cat() {
  std::cout << "[Cat] " << _type << " default destructor called!" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meow" << std::endl; }
