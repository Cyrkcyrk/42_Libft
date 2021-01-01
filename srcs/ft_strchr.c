/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:01:20 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/01 20:33:45 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = -1;
	while(s[++i] != '\0')
		if(s[i] == (char)c)
			return ((char *)(s + i));
	if ((char)c == s[i])
		return ((char *)(s + i));
	return (NULL);
}
