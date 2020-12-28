/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:49:53 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 16:59:06 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int i, j;

	if (to_find && to_find[0] == '\0')
		return (str);
	i = -1;
	while (str && str[++i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && j < len && to_find[j] != '\0')
			j++;
		if (to_find && (to_find[j] == '\0' || j == len))
			return (str + i);
	}
	return (0);
}
