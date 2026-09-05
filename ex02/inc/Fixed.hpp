/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:43:59 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 19:20:08 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include "../inc/colors.hpp"
#include <iostream>
#include <cmath>

class Fixed
{
    public :

        Fixed(void);                //default constructor
        Fixed(Fixed const & src);   //copy constructor
        Fixed(const int i);         //int constructor
        Fixed(const float f);       //float constructor
        ~Fixed(void);               //defautlt destructor

        Fixed&  operator=(Fixed const & rhs);             
        bool    operator>(Fixed const & rhs) const;    
        bool    operator<(Fixed const & rhs) const; 
        bool    operator>=(Fixed const & rhs) const;
        bool    operator<=(Fixed const & rhs) const;
        bool    operator==(Fixed const & rhs) const;
        bool    operator!=(Fixed const & rhs) const;   

        Fixed   operator+(Fixed const & rhs) const;
        Fixed   operator-(Fixed const & rhs) const;
        Fixed   operator*(Fixed const & rhs) const;
        Fixed   operator/(Fixed const & rhs) const;


        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed&  min(const Fixed& a, Fixed const & b);

        static Fixed&  max(Fixed &a, Fixed &b);
        static const Fixed&  max(const Fixed& a, const Fixed & b);


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
