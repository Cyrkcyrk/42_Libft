/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 01:25:02 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/07 19:30:04 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *maillon;

	if (*alst == NULL)
		*alst = new;
	else
	{
		maillon = *alst;
		while (maillon->next)
			maillon = maillon->next;
		maillon->next = new;
	}
}
