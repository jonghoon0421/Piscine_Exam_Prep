/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:00:45 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/10 20:48:19 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		basecheck(const char c)
{
	int nb;

	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'z')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'Z')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int neg;
	int nb;
	int current;

	nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\f' || *str == '\n'
			|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	current = basecheck(*str);
	while (current >= 0 && current < str_base)
	{
		nb = nb * str_base + current;
		str++;
		current = basecheck(*str);
	}
	return (neg == -1 ? -nb : nb);
}

int		main()
{
	const char string[5] = "13";
	int tes = 3;
	printf("%d\n", ft_atoi_base(string, tes));
	return (0);
}
