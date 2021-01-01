/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:23:57 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 15:48:24 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	
	if (!(ret = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}