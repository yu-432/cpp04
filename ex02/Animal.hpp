/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:58:00 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 17:56:40 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal& src);
  virtual ~Animal();
  Animal& operator=(const Animal& src);
  virtual void makeSound() const = 0;
  const std::string& getType() const;

 protected:
  std::string _type;
};

#endif
