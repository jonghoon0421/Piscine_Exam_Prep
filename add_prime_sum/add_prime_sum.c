/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:50:04 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/30 15:17:40 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_prime(int p)
{
	int i;
	int check;

	i = 2;
	check = 0;
	if (p < 2)
		return (0);
	else if (p == 2 || p == 3)
		return (1);
	else if (p % 2 == 0)
		return (0);
	else
	{
		while ((2 * i - 1) < p)
		{
			check = (p % (2 * i - 1));
			if (check == 0)
				return (0);
			else
				i++;
		}
	}
	return (1);
}

int		add_prime_sum(int q)
{
	int j;
	int original;
	int new;

	j = 1;
	original = q;
	new = 0;
	if (is_prime(original) == 1)
		new = original;
	while (j < q)
	{
		if (is_prime(original - j) == 1)
			new = new + (original - j);
		j++;
	}
	return (new);
}

int		ft_atoi(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int num)
{
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return (num);
}

int		main(int ac, char **av)
{
	int real;

	if (ac != 2)
	{
		ft_putchar('0');
		write (1, "\n", 1);
	}
	else if (ft_atoi(av[1]) < 1)
	{
		ft_putchar('0');
		write (1, "\n", 1);
	}
	else
	{
		real = ft_atoi(av[1]);
		ft_putnbr(add_prime_sum(real));
		write (1, "\n", 1);
	}
	return (0);
}
