/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 15:34:38 by matheme           #+#    #+#             */
/*   Updated: 2019/12/16 16:34:12 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DEF_OBJECT
# define DEF_OBJECT

#include <string>
#include <iostream>

class Object
{
    private :
	int			m_x;
	int			m_y;
	int			m_w;
	int			m_h;
    std::string	m_name;

	public :
	//constructeur et deconstruteur
	Object(std::string name);
	~Object(void);
	//ecriture
	void    x(int x);
	void    y(int y);
	void    set_position(int x, int y);

	void    w(int w);
	void    h(int h);
	void    set_size(int x, int y);
	//lecture
	int x(void);
	int y(void);
	int w(void);
	int h(void);
	std::string name(void);

	//affichage des variables;
	void    info(void);
};

#endif