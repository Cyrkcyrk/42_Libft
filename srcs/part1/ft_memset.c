/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:08:26 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 15:49:52 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
	unsigned int i;

	i = -1;
	while (++i < n)
		((char*)s)[i] = c;
	return (s);
}