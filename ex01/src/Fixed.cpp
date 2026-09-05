/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:57:50 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 19:25:21 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(int const i) : _value(i << _fractionalBits) 
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _value(roundf(f * (1  << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _value = rhs._value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{

    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return _value >> _fractionalBits;
}

std::ostream & operator<<(std::ostream &ofs, Fixed const & fpn)
{
    ofs << fpn.toFloat();
    return ofs;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}