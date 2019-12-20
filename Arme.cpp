/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:45:54 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 17:29:53 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.h"

//Constructeur par default
Arme::Arme() : Object("poing")
{
    m_degat = 5;
    m_durabilite = 1;
}

// Constructeur Personnalise
Arme::Arme(std::string nom, int degats, int durabilite) : Object(nom)
{
    m_degat = degats;
    m_durabilite = durabilite;
}

//Desconstructeur
Arme::~Arme(void)
{
    
}

//ecriture
void	Arme::durabilite(int durabilite)
{
	m_durabilite = durabilite;
}

//lecture
int		Arme::degat(void)
{
   return (m_degat); 
}

int		Arme::durabilite(void)
{
	return (m_durabilite);
}

//affichage des variables;
void    Arme::info()
{
	Object::info();
    std::cout << "degat: " << m_degat << " durabilité: " << m_durabilite << std::endl;
}