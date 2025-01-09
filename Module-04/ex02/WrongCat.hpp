/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:55:52 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 10:56:30 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public :
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &copy);
		~WrongCat();

		void makeSound() const;
};

#endif