/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:15:23 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/12 15:46:35 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*s2;

	if (n == 0)
		return (NULL);
	s2 = (unsigned char *)s;
	i = 0;
	while (i < n - 1 && s2[i] != (unsigned char)c)
		i++;
	if (s2[i] == (unsigned char)c)
		return ((void *)&s2[i]);
	return (NULL);
}
