/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:59:55 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/18 14:17:41 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();  // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  Animal original;
  Animal copied(original);
  copied.makeSound();

  delete meta;
  delete i;
  delete j;

  std::cout << "=====Wrong test=====" << std::endl;
  const WrongAnimal* meta2 = new WrongAnimal();
  const WrongAnimal* i2 = new WrongCat();
  std::cout << i2->getType() << " " << std::endl;
  meta2->makeSound();
  i2->makeSound();  // will output the cat sound!

  delete meta2;
  delete i2;
  std::cout << "=====Wrong test end=====" << std::endl;

  return 0;
}