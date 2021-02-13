/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:49:53 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/13 13:12:43 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	unsigned int	i;
	unsigned int	len_find;

	if (to_find && to_find[0] == '\0')
		return ((char *)str);
	len_find = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0' && i < size)
	{
		if (len_find + i > size)
			return (NULL);
		if (str[i] == to_find[0] && !ft_strncmp(str + i, to_find, len_find))
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
