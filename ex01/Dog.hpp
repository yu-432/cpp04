/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:43:44 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 19:58:02 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& src);
  ~Dog();
  Dog& operator=(const Dog& src);
  void makeSound() const;
  void setIdea(const std::string& idea, size_t index);
  void showIdeas() const;

 private:
  Brain* _brain;
};

#endif
