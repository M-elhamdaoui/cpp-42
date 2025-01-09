/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:05:07 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 10:18:05 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

	public :
		Cat();
		Cat(std::string type);
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();

		void makeSound() const;
};

#endif