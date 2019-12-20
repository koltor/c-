/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 15:49:42 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 17:29:43 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.h"

Object::Object(std::string name)
{
    m_name = name;
    m_x = 0;
    m_y = 0;
    m_w = 1;
    m_h = 1;
}

Object::~Object(void)
{

}

int Object::x(void)
{
    return(m_x);
}

int Object::y(void)
{
    return(m_y);
}
int Object::w(void)
{
    return(m_w);
}
int Object::h(void)
{
    return(m_h);
}

std::string Object::name(void)
{
    return(m_name);
}


void Object::x(int x)
{
    m_x = x;
}

void Object::y(int y)
{
    m_y = y;
}
void Object::w(int w)
{
    m_w = w;
}
void Object::h(int h)
{
    m_h = h;
}

void    Object::set_position(int x, int y)
{
    Object::x(x);
    Object::y(x);
}

void    Object::set_size(int w, int h)
{
    Object::w(w);
    Object::h(h);
}

void    Object::info()
{
    std::cout << m_name << std::endl;
    std::cout << "x: " << m_x << " y: " << m_y << " w: " << m_w << " h: " << m_h << std::endl;
}