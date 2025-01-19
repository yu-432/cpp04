/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:59:55 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 18:01:18 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  // const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  // meta->makeSound();
  // Animal original;
  // Animal copied(original);
  // copied.makeSound();
  // delete meta;

  delete i;
  delete j;

  std::cout << "=====Brain=====" << std::endl;
  const Animal* j2 = new Dog();
  const Animal* i2 = new Cat();
  delete j2;  // should not create a leak
  delete i2;
  std::cout << "=====Brain=====" << std::endl;

  return 0;
}