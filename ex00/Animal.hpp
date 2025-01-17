/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:58:00 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/17 17:19:36 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal {
 public:
  Animal();
  Animal(const Animal& src);
  virtual ~Animal();
  Animal& Animal::operator=(const Animal& src);
  virtual void makeSound() const;
  const std::string& getType() const;

 protected:
  std::string _type;
};
