/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:43:59 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/04 22:14:33 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public :

        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);

        Fixed& operator=(Fixed const & rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    private :

        int _fixed;
        static const int _frac = 8;

};

#endif 
