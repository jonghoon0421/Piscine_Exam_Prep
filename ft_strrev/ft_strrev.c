/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:45:30 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/09 22:55:26 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i >= j)
	{
		if (i == j)
			break ;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

int		main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%s\n", ft_strrev(str));
	return (0);
}
