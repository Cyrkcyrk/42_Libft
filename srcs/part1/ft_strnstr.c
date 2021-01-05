/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:49:53 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/04 23:16:46 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find && to_find[0] == '\0')
		return ((char *)str);
	while (str && str[i] != '\0' && i < size)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < size)
			j++;
		if (to_find && to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
