/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:45:44 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 17:28:41 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Personnage.h"
#include <iostream>

using namespace std;


Personnage::Personnage(std::string nom) : Object(nom)
{
    m_vie = 100;
    m_arme = NULL;
}

Personnage::~Personnage()
{
    
}

void    Personnage::attaquer(Personnage &cible)
{
    if (m_arme != NULL)
    {
	    cout << name() << " attaque " << cible.name() << " a l'aide de " << m_arme->name() << endl;
        cible.recevoir_degat(m_arme->degat());
    }
    else
    {
        cout << name() << "attaque" << cible.name() << "à la force de ses mains" << endl;
    }
}

void    Personnage::recevoir_degat(int nbDegats)
{
    m_vie = (m_vie - nbDegats < 0) ? 0 : m_vie - nbDegats;
}

void    Personnage::changer_arme(Arme *arme)
{
    m_arme = arme;
}

void    Personnage::info()
{
    Object::info();
    cout << "point de vie: " << m_vie << endl;
    if (m_arme)
        cout << "son arme est: " << m_arme->name() << endl << endl;
    else
        cout << "aucune arme" << endl;
}