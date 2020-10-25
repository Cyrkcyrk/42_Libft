/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:11:29 by ckasyc            #+#    #+#             */
/*   Updated: 2020/10/25 16:41:35 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *cpy_from_start(void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
		((unsigned char)dest)[i] = ((unsigned char)src)[i];
	return (dest);
}

void *cpy_from_end(void *dest, const void *src, size_t n)
{
	while (--n > 0)
		((unsigned char)dest)[i] = ((unsigned char)src)[i];
	return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long long	adr_dest, adr_src;

	adr_dest = (unsigned long long) dest;
	adr_src = (unsigned long long) src;
	if (adr_src == adr_dest)
		return (dest);
	if (adr_src > adr_dest && adr_src <= adr_dest + n - 1)
		return (cpy_from_start(dest, src, n));
	if (adr_dest > adr_src && adr_dest <= adr_src + n - 1)
		return (cpy_from_end(dest, src, n));
	return (cpy_from_end(dest, src, n));
}
