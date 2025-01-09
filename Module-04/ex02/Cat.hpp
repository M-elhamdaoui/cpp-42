/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:05:07 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 14:05:41 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	private :
		Brain* brain;
	public :
		Cat();
		Cat(std::string type);
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		~Cat();

		void makeSound() const;
		Brain* getBrain() const;
};

#endif