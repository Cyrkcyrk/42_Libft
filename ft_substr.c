/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 21:58:28 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/12 16:05:30 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ret;

	if (s && start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (s && len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	if (!s || !(ret = malloc((1 + len) * sizeof(char))))
		return (NULL);
	ret[len] = '\0';
	i = 0;
	while (i < len && s[i] != '\0')
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
