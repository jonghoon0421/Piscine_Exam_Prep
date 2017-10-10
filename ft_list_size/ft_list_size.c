/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 00:04:40 by jonkim            #+#    #+#             */
/*   Updated: 2017/10/09 22:52:39 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;
	t_list *list;

	count = 0;
	list = begin_list;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
