/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 13:25:14 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/31 15:27:31 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		n = n * 10;
		n = n + str[j] - '0';
		j++;
	}
	return (n);
}

char	ft_putnbr(int a)
{
	if (a < 10)
	{
		a = a + '0';
		write(1, &a, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	return (0);
}

void	table(int nb)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(nb * i);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(1, "\n", 1);
	else
		table(ft_atoi(av[1]));
	return (0);
}
