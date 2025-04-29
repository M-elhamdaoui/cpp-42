/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:03:41 by mel-hamd          #+#    #+#             */
/*   Updated: 2025/04/29 16:12:35 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

