/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:07:28 by mel-hamd          #+#    #+#             */
/*   Updated: 2024/12/23 12:45:12 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

# include <iostream>

class Harl {
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public :
		void complain(std::string level );
};


#endif