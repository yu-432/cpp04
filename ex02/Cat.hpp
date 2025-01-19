/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:44:14 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 17:11:37 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& src);
  ~Cat();
  Cat& operator=(const Cat& src);
  void makeSound() const;
  
 private:
  Brain* _brain;
};

#endif
