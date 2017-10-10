/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:13:19 by jonkim            #+#    #+#             */
/*   Updated: 2017/09/01 09:31:21 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *freeit;

	if (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref))
		{
			freeit = *begin_list;
			*begin_list = (*begin_list)->next;
			free(freeit);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}
