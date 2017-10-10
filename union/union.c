/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 12:27:45 by jonkim            #+#    #+#             */
/*   Updated: 2017/09/01 08:54:57 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_check(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	while (j < i)
	{
		if (s[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_work(char *s1, char *s2)
{
	char res[500];
	int length;
	int i;
	int j;
	int n;

	length = 1;
	j = 0;
	res[0] = s1[0];
	i = 1;
	while (s1[i] != '\0')
	{
		if (ft_check(res, s1[i]) == 1)
		{
			res[length] = s1[i];
			length++;
		}
		i++;
	}
	while (s2[j] != '\0')
	{
		if (ft_check(res, s2[j]) == 1)
		{
			res[length] = s2[j];
			length++;
		}
		j++;
	}
	res[length] = '\0';
	n = 0;
	while (n < length)
	{
		write(1, &res[n], 1);
		n++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		ft_work(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
