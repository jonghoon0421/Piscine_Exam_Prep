/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 01:53:50 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/29 19:38:04 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		if (str[j] == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		else
			j++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	av[1] = av[1];
	if (ac != 2)
		write(1, "a\n", 2);
	if (ac == 2)
		aff_a(av[1]);
	return (0);
}
