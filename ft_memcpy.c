/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:11:31 by ckasyc            #+#    #+#             */
/*   Updated: 2020/10/24 12:38:44 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy (void *dest, const void *src, size_t n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
		((int*)dest)[i] = ((int*)src)[i];
	return (dest);
}
