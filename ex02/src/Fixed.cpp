/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:57:50 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/05 19:23:12 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

/**
 * @brief CONSTRUCTORS
 */
Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
}

Fixed::Fixed(int const i) : _value(i << _fractionalBits) 
{
}

Fixed::Fixed(float const f) : _value(roundf(f * (1  << _fractionalBits)))
{
}


/**
 * @brief SETTERS GETTERS
 */
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


/**
 * @brief OPERATORS OVERLOADS
 */
Fixed& Fixed::operator=(Fixed const & rhs)
{
    _value = rhs._value;
    return *this;
}

bool    Fixed::operator>(Fixed const & rhs) const
{
    return (_value > rhs._value);
}

bool    Fixed::operator<(Fixed const & rhs) const
{
    return (_value < rhs._value);
}

bool    Fixed::operator>=(Fixed const & rhs) const
{
    return (_value >= rhs._value);
}

bool    Fixed::operator<=(Fixed const & rhs) const
{
    return (_value <= rhs._value);
}

bool    Fixed::operator==(Fixed const & rhs) const
{
    return (_value == rhs._value);
}

bool    Fixed::operator!=(Fixed const & rhs) const
{
    return (_value != rhs._value);
}

Fixed   Fixed::operator+(Fixed const & rhs) const
{
    Fixed res;
    res._value = _value + rhs._value;
    return res;
}

Fixed   Fixed::operator-(Fixed const & rhs) const
{
    Fixed res;
    res._value = _value - rhs._value;
    return res;
}

Fixed   Fixed::operator*(Fixed const & rhs) const
{
    Fixed res;
    long  tmp;
    tmp = static_cast<long>(_value) * static_cast<long>(rhs._value);
    res._value = (static_cast<int>(tmp >> _fractionalBits));
    return res;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed res;
	if (rhs._value == 0)
	{
		std::cerr << BL_RED "Error: Division by zero is forbidden." RESET << std::endl;
		return res;
	}
	long temp = (static_cast<long>(this->_value) << _fractionalBits) / rhs._value;
	res._value = (static_cast<int>(temp));
	return res;
}

Fixed&   Fixed::operator++()
{
    ++_value;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    ++_value; 
    return tmp;
}

Fixed&   Fixed::operator--()
{
    --_value;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    --_value; 
    return tmp;
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed&  Fixed::min(Fixed const &a, Fixed const &b)
{ 
    return (a < b) ? a : b;
}

Fixed&  Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed&  Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b) ? a : b;
}

std::ostream & operator<<(std::ostream &ofs, Fixed const & fpn)
{
    ofs << fpn.toFloat();
    return ofs;
}

/**
 * @brief DESTRUCTOR
 */
Fixed::~Fixed()
{
}