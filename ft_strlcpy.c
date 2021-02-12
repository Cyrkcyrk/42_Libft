/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:45:07 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/12 15:18:01 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size > 0)
	{
		i = -1;
		while (++i < size - 1 && src[i])
			dest[i] = src[i];
		if (i < size)
			dest[i] = '\0';
	}
	return (len_src);
}
