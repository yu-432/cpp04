/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:01:50 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/19 21:14:14 by yooshima         ###   ########.fr       */
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
  void setIdea(const std::string& idea, size_t index);
  void showIdeas() const;

 private:
  std::string _ideas[100];
  const static size_t _ideasSize = 100;
};

#endif
