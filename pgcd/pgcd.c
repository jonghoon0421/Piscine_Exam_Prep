/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 19:11:37 by jonkim            #+#    #+#             */
/*   Updated: 2017/09/01 08:55:47 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	pgcd(int a, int b)
{
	int div;
	int ans;
	char c;
	int big;
	int small;

	div = 2;
	ans = 1;
	if (a > b)
	{
		big = a;
		small = b;
	}
	else
	{
		big = b;
		small = a;
	}
	while (div < small)
	{
		if ((a % div == 0) && (b % div == 0))
			ans = div;
		div++;
	}
	c = ans + '0';
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	else
		write(1, "\n", 1);
	return (0);
}
