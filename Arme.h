/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:12:47 by matheme           #+#    #+#             */
/*   Updated: 2019/12/10 18:44:21 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ARME
# define DEF_ARME

#include <string>

class Arme
{
    private :
    int			m_degat;
    int			m_durabilite;
    std::string	m_nom;

    public :
	Arme();
    Arme(std::string nom, int degats, int durabilite);
    int     get_degat();
    std::string  get_name();
    void    info();
};

#endif