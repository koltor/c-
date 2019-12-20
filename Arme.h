/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:12:47 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 16:42:58 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ARME
# define DEF_ARME

#include "Object.h"

class Arme : public Object
{
    private :
    int			m_degat;
    int			m_durabilite;

    public :
    //constructeur et deconstruteur
	Arme();
    Arme(std::string nom, int degats, int durabilite);
    ~Arme();

    //ecriture
	void		durabilite(int durabilite);
    
    //lecture
    int			degat(void);
	int			durabilite(void);

	//affichage des variables;
    void		info(void);
};

#endif