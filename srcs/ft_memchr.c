/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:15:23 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 16:01:29 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;	
	while (++i < n && *s2 != (unsigned char)c)
		s2++;
	if (*s2 == (unsigned char) c && i < n)
		return ((void *)s2);
	return (NULL);
}
