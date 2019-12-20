/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matheme <matheme@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 16:46:41 by matheme           #+#    #+#             */
/*   Updated: 2019/12/20 17:26:47 by matheme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.h"
#include "Personnage.h"
#include "Object.h"
using namespace std;

int	main()
{
	Personnage kolak("kolak");
	Arme arc("arc celeste", 300, 1000);
	arc.info();
	cout << endl;
	kolak.info();
	// Arme achette("Achette", 15, 10);
	// Personnage moi("moi"), toi("toi");
	// toi.info();
	// moi.info();
	// toi.changer_arme(achette);
	// moi.attaquer(toi);
	// toi.info();
	// toi.attaquer(moi);
	// moi.info();
	return (0);
}
