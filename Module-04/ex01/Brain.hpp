/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:46:26 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/01/09 14:07:05 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN._PP
#define BRAIN_HPP

#include <iostream>

class Brain {
		private :
			std::string ideas[100];
		public :
			Brain();
			Brain(const Brain &copy);
			Brain &operator=(const Brain &copy);
			~Brain();

			std::string getIdea(int i) const;
};

#endif