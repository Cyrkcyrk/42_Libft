/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 23:56:21 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/05 00:31:25 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
	}
	return (NULL);
}
