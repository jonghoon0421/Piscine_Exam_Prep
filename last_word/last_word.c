/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 20:08:09 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/30 23:09:43 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		do_work(char *str)
{
	int length;
	int i;
	int upto;
	int test;

	length = 0;
	test = 0;
	while (str[test] == ' ' || str[test] == '\t')
		test++;
	while (str[length] != '\0')
		length++;
	if (test == length)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		i = length - 1;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		upto = i;
		while (str[i] != ' ' && str[i] != '\t')
			i--;
		while (i < upto)
		{
			write(1, &str[i + 1], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


int		main(int ac, char **av)
{
	if (ac == 2)
		do_work(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
