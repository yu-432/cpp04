/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:53:32 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/18 14:15:54 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& src);
  virtual ~WrongAnimal();
  WrongAnimal& operator=(const WrongAnimal& src);
  void makeSound() const;
  const std::string& getType() const;

 protected:
  std::string _type;
};

#endif
