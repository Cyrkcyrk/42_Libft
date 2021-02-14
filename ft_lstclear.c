/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 01:33:56 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/14 14:24:16 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *prev;
	t_list *maillon;

	maillon = *lst;
	while (maillon != NULL)
	{
		prev = maillon;
		maillon = maillon->next;
		if (del)
			(*del)(prev->content);
		free(prev);
	}
	*lst = NULL;
}
