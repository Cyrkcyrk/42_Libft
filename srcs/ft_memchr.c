/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:15:23 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 15:01:37 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;
	void *s2;

	s2 = s;
	i = -1;	
	while (++i < n && ((unsigned char)s)[i] != (unsigned char)c)
		s2++;
}
