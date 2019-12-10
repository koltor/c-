/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:45:54 by matheme           #+#    #+#             */
/*   Updated: 2019/12/10 19:06:33 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.h"
#include <iostream>
using namespace std;

Arme::Arme()
{
    m_nom = "poing";
    m_degat = 5;
    m_durabilite = 0;
}

Arme::Arme(string nom, int degats, int durabilite)
{
    m_nom = nom;
    m_degat = degats;
    m_durabilite = durabilite;
}

void    Arme::info()
{
    cout << m_nom << " (" << m_degat << ") " << "durabilité: " << m_durabilite;
}

string    Arme::get_name()
{
    return (m_nom);
}

int    Arme::get_degat()
{
   return (m_degat); 
}