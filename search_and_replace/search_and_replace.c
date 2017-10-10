/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 09:25:46 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/30 17:04:23 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *s1, char *s2, char *s3)
{
	int	i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (j < i)
	{
		if (s1[j] == s2[0])
			s1[j] = s3[0];
		j++;
	}
	j = 0;
	while (j < i)
	{
		write(1, &s1[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[2][count1] != '\0')
		count1++;
	while (av[3][count2] != '\0')
		count2++;
	if (count1 >= 2 || count2 >= 2)
		write(1, "\n", 1);
	else
		search_and_replace(av[1], av[2], av[3]);
	return (0);
}
