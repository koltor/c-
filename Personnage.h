/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:51:41 by matheme           #+#    #+#             */
/*   Updated: 2019/12/10 19:06:34 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PERSONNAGE
# define DEF_PERSONNAGE

#include <string>
#include "Arme.h"

class Personnage
{
    private :
    int			m_vie;
    std::string	m_nom;
	Arme		m_arme;

    public :
	Personnage(std::string nom);
    void    attaquer(Personnage &cible);
    void    info();
    void    recevoir_degat(int nbDegats);
	void	changer_arme(Arme arme);
	std::string	get_name();
};

#endif