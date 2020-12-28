/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:47:52 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 21:09:56 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	while (i < len + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
