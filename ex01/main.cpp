/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:59:55 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 19:55:00 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;  // should not create a leak
  delete i;
  std::cout << "=====array test=====" << std::endl;
  Animal** animals = new Animal*[10];
  for (int i = 0; i < 10; i++) {
    if (i % 2) {
      animals[i] = new Dog();
    } else {
      animals[i] = new Cat();
    }
  }
  for (int i = 0; i < 10; i++) {
    delete animals[i];
  }
  delete[] animals;

  std::cout << "=====copy test=====" << std::endl;
  Dog* original = new Dog();
  Dog* copy = new Dog(*original);

  original->setIdea("Idea 1", 0);
  std::cout << "-----original deep copy test----" << std::endl;
  original->showIdeas();
  std::cout << "-----copy deep copy test----" << std::endl;
  copy->showIdeas();
  std::cout << "-----deep copy test----" << std::endl;
  delete original;
  delete copy;
}