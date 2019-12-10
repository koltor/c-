/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:46:41 by matheme           #+#    #+#             */
/*   Updated: 2019/12/10 19:06:34 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.h"
#include "Personnage.h"
using namespace std;

int	main()
{
	Arme achette("Achette", 15, 10);
	Personnage moi("moi"), toi("toi");
	toi.info();
	moi.info();
	toi.changer_arme(achette);
	moi.attaquer(toi);
	toi.info();
	toi.attaquer(moi);
	moi.info();
	return (0);
}
