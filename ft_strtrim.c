/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:18:47 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/05 00:42:21 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	i = -1;
	while (s1[++i + start] != '\0')
		if (!ft_strchr(set, s1[i + start]))
			len = i + 1;
	if (!(ret = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		ret[i] = s1[i + start];
	ret[i] = '\0';
	return (ret);
}
