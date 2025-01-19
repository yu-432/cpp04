/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:06:44 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 21:40:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "[Brain]" << " default constructor called!" << std::endl;
}

Brain::Brain(const Brain& src) {
  std::cout << "[Brain]" << " copy constructor called!" << std::endl;
  for (size_t i = 0; i < _ideasSize; i++) {
    _ideas[i] = src._ideas[i];
  }
}

Brain& Brain::operator=(const Brain& src) {
  std::cout << "[Brain]" << " copy assignment constructor called!" << std::endl;
  if (this != &src) {
    for (size_t i = 0; i < _ideasSize; i++) {
      _ideas[i] = src._ideas[i];
    }
  }
  return *this;
}

Brain::~Brain() {
  std::cout << "[Brain]" << " default destructor called!" << std::endl;
}

void Brain::setIdea(const std::string& idea, size_t index) {
  if (index < _ideasSize) {
    _ideas[index] = idea;
  }
}

void Brain::showIdeas() const {
  for (size_t i = 0; i < _ideasSize; i++) {
    if (_ideas[i].empty()) {
      break;
    }
    std::cout << _ideas[i] << std::endl;
  }
}
