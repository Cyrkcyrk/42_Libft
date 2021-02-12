/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 01:17:41 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/07 19:29:45 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ret;

	if (!(ret = malloc(sizeof(t_list))))
		return (NULL);
	ret->next = NULL;
	ret->content = content;
	return (ret);
}
