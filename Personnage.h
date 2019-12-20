/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Personnage.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:51:41 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 17:26:47 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PERSONNAGE
# define DEF_PERSONNAGE

#include "Object.h"
#include "Arme.h"

class Personnage : public Object
{
    private :
    int			m_vie;
	Arme		*m_arme;

    public :
    // les constructeurs
	Personnage(std::string nom);
    ~Personnage(void);

    // fonction d'ecriture
    void    attaquer(Personnage &cible);    //Permet au personnage d'attaquer un autre personnage
    void    recevoir_degat(int nbDegats);   //Permet au personnage de diminuer ses points de vie
	void	changer_arme(Arme *arme);        //Permet au Personnage de changer d'arme

    // fonction de lecture
    void    info();                         //Permet de recuperer le status de toute les variable du personnage
};

#endif