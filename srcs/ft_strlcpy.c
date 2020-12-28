/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 12:45:07 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/27 19:54:48 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_src;

	i = 0;
	len_src = ft_strlen(src);
	while (size > 0 && i < size - 1 && i < len_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
