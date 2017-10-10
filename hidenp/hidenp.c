/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:16:26 by jonkim            #+#    #+#             */
/*   Updated: 2017/09/01 08:56:43 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;

	while (s2[i] != '\0')
	{
		if (s1[j] == s2[i])
			j++;
		i++;
	}
	if (s1[j] == '\0')
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}

int		main(int ac, char **av)
{
	if (ac != 3)
		write(1, "\n", 1);
	else
		ft_check(av[1], av[2]);
	return (0);
}