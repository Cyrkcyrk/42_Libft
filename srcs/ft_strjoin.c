/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:12:29 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/29 17:45:45 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int 	len;
	int				i;
	int				j;
	char			*ret;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (!(ret = malloc(len * sizeof(char))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		ret[i] = s1[i];
	j = -1;
	while (s2[++j] != '\0')
		ret[j + i] = s2[j];
	ret[len - 1] = '\0';
	return (ret);
}
