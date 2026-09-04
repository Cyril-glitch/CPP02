/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 21:57:50 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/04 23:15:31 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(int const raw)
{

    std::cout << "setRawBits member function called" << std::endl;
    _fixed = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}