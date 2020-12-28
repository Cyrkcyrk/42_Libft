/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 13:08:19 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 15:01:16 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return (0);
}
