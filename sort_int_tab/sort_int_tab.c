/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:38:18 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/09 22:50:26 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int temp;

	i = 0;
	temp = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	int tab[10];
	int i = 0;
	
	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 8;
	tab[5] = 0;
	tab[6] = 1;
	tab[7] = 7;
	tab[8] = 5;
	tab[9] = 6;
	sort_int_tab(tab, 5);
	while (i <= 9)
		printf("%d\n", tab[i++]);
	return (0);
}
