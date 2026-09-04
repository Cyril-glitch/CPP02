/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:43:59 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 00:03:38 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public :

        Fixed(void);
        Fixed(Fixed const & src);
        Fixed(const int i);
        Fixed(const float f);
        ~Fixed(void);

        Fixed& operator=(Fixed const & rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    
    private :

        int _value;
        static const int _fractionalBits = 8;

};

std::ostream& operator<<(std::ostream &ofs, Fixed const & fpn);

#endif 
