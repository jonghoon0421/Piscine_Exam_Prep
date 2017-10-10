/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:44:40 by jonkim            #+#    #+#             */
/*   Updated: 2017/08/29 17:15:16 by jonkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}

int		main()
{
	unsigned char mybyte = 0x0F;
	printf("%c\n", swap_bits(mybyte));
	return (0);
}
