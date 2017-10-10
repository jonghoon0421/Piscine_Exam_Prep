/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 23:13:34 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/30 23:33:13 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;

	div = 128;
	while (div != 0)
	{
		if (div <= octet)
		{
			write(1, "1", 1);
			octet = octet % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}
