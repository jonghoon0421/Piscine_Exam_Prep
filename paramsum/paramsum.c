/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:36:50 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/31 20:46:26 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	char c;

	if (ac == 1)
		write(1, "0\n", 2);
	else
	{
		c = (ac - 1) + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	(void)av;
	return (0);
}
