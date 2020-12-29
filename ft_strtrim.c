/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:18:47 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 22:43:54 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret, start;
	int		i, pos, len;

	if (!s1 || !set )//|| !(ret = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (NULL);
	start = &(s1[i]);
	i = -1;
	while (start[++i] != '\0')
		if (!ft_strchr(set, start[i]))
			len = i + 1;
	if (!(ret = malloc(len + 1) * sizeof(char)))
		return (NULL);
	i = -1;
	while (++i <= len)
		ret[i] = start[i];
	ret[i] = '\0'
	return (ret);
}
