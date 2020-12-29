/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 15:52:31 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/29 17:03:46 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_fill_str(int size, char **strs, char *sep, int len)
{
	char	*ret;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = -1;
	ret = malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (++k < size)
	{
		j = -1;
		while (strs[k][++j] != '\0')
			ret[++i] = strs[k][j];
		if (k < size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
				ret[++i] = sep[j];
		}
	}
	ret[i + 1] = '\0';
	return (ret);
}

char	*ft_strjoin2(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*ret;

	if (size == 0)
	{
		ret = malloc(sizeof(char));
		ret[0] = '\0';
		return (ret);
	}
	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]) + ft_strlen(sep);
	return (ft_fill_str(size, strs, sep, len));
}
