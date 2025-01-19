/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:32:02 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 20:19:54 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() {
  std::cout << "[WrongCat] " << _type << " default constructor called!"
            << std::endl;
  _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
  std::cout << "[WrongCat] " << _type << " copy constructor called!"
            << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
  std::cout << "[WrongCat] " << _type << " copy assignment constructor called!"
            << std::endl;
  if (this != &src) {
    _type = src._type;
  }
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "[WrongCat] " << _type << " default destructor called!"
            << std::endl;
}

void WrongCat::makeSound() const { std::cout << "Meow" << std::endl; }
