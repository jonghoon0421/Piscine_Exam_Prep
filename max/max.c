/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:34:15 by jonkim            #+#    #+#             */
/*   Updated: 2017/09/01 08:56:08 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int res;

	i = 0;
	res = tab[0];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

int		main()
{
	int tab[10];
	
	tab[0] = 6;
	tab[1] = 21;
	tab[2] = 34;
	tab[3] = 82;
	tab[4] = 482;
	tab[5] = 130;
	tab[6] = 11;
	tab[7] = 27;
	tab[8] = 56;
	tab[9] = 65;
	printf("%d\n", max(tab, 10));
	return (0);
}
