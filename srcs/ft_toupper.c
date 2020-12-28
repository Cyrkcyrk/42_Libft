/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 13:34:44 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 15:04:34 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int		ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
