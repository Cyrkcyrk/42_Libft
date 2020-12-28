/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 20:09:15 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 16:56:54 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ret;

	ret = NULL;
	i = -1;
	while(s[++i] != '\0')
		if(s[i] == (char)c)
			ret = (char *)(s + i);
	return (ret);
}
