/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:01:46 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/09 22:51:21 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i;
	int *result;

	i = 0;
	if (start == end)
	{
		result = (int*)malloc(sizeof(int) * (1));
		while (i < 1)
		{
			result[i] = start;
			i++;
		}
	}
	else if (start < end)
	{
		result = (int*)malloc(sizeof(int) * (end - start + 1));
		while (start + i <= end)
		{
			result[i] = start + i;
			i++;
		}
	}
	else
	{
		result = (int*)malloc(sizeof(int) * (start - end + 1));
		while (end + i <= start)
		{
			result[i] = start - i;
			i++;
		}
	}
	return (result);
}

int		main()
{
	int i;
	int *table;

	i = 0;
	table = ft_range(0, -3);
	while (i < 4)
	{
		printf("%d ", table[i]);
		i++;
	}
	return (0);
}
