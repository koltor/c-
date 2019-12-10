/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:45:44 by matheme           #+#    #+#             */
/*   Updated: 2019/12/10 18:39:45 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Personnage.h"
#include <iostream>

using namespace std;


Personnage::Personnage(std::string nom)
{
    Arme poing;
    m_nom = nom;
    m_vie = 100;
    m_arme = poing;
}

void    Personnage::attaquer(Personnage &cible)
{
	cout << m_nom << " attaque " << cible.get_name() << " a l'aide de " << m_arme.get_name() << endl;
    cible.recevoir_degat(m_arme.get_degat());
}

void    Personnage::recevoir_degat(int nbDegats)
{
    m_vie = (m_vie - nbDegats < 0) ? 0 : m_vie - nbDegats;
}

void    Personnage::changer_arme(Arme arme)
{
    m_arme = arme;
}

string    Personnage::get_name()
{
	return (m_nom);
}

void    Personnage::info()
{
    cout << "nom: " << m_nom << " point de vie: " << m_vie << endl;
    cout << "mon arme est: ";
	m_arme.info();
	cout << endl << endl;
}