/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:43:44 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 17:36:04 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>

class Dog : public Animal {
 public:
  Dog();
  Dog(const Dog& src);
  ~Dog();
  Dog& operator=(const Dog& src);
  void makeSound() const;

 private:
  Brain* _ideas;
};

#endif
