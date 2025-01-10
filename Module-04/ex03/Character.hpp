/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:33:01 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/10 17:31:57 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
	std::string name;
	AMateria *inventory[4];

public:
	Character();
	Character(std::string name);
	Character(const Character &copy);
	Character &operator=(const Character &copy);
	~Character();

	std::string const &getName() const;
	AMateria *getInvantory(int i) const;

	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif