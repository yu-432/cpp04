/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:08:12 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 20:19:30 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  std::cout << "[WrongAnimal] " << _type << " default constructor called!"
            << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
  std::cout << "[WrongAnimal] " << _type << " copy constructor called!"
            << std::endl;
  *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
  std::cout << "[WrongAnimal] " << _type
            << " copy assignment constructor called!" << std::endl;
  if (this != &src) {
    _type = src._type;
  }
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "[WrongAnimal] " << _type << " default destructor called!"
            << std::endl;
}

void WrongAnimal::makeSound() const { std::cout << "***" << std::endl; }

const std::string& WrongAnimal::getType() const { return _type; }
