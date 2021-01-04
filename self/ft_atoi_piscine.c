/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 19:40:30 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/05 00:10:24 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int		ft_atoi(char *str)
{
	int		neg;
	int		value;

	neg = 1;
	value = 0;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' '))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	value *= neg;
	return (value);
}
