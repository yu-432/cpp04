/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:01:50 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 17:37:37 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& src);
  ~Brain();
  Brain& operator=(const Brain& src);
  std::string _ideas[100];

 private:
  const static size_t _ideasSize = 100;
};

#endif
