/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 17:04:48 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/30 17:37:51 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find(char *s1, char *s2)
{
	int len;
	int i;
	int j;

	len = 0;
	i = 0;
	j = 0;
	while (s2[len] != '\0')
		len++;
	while (j < len)
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		j = 0;
		while (j < i)
		{
			write(1, &s1[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		find(av[1], av[2]);
	return (0);
}
