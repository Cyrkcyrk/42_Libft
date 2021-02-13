/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:43:38 by ckasyc            #+#    #+#             */
/*   Updated: 2021/02/13 13:36:06 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void		putnbr_to_str(int nb, char *str, int pos)
{
	if ((int)(nb / 10) != 0)
		putnbr_to_str((int)(nb / 10), str, pos - 1);
	str[pos] = nb % 10 + '0';
}

static int		getlen_int(int nb)
{
	int len;

	len = 1;
	if (nb == -2147483648)
	{
		len++;
		nb = -214748364;
	}
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb / 10 > 0)
	{
		nb = (nb / 10);
		len++;
	}
	return (len);
}

void			ft_putnbr_fd(int nb, int fd)
{
	char	ret[12];
	int		len;

	len = getlen_int(nb);
	ret[len] = '\0';
	if (nb == -2147483648)
	{
		ret[--len] = '8';
		nb = -214748364;
	}
	if (nb < 0)
	{
		nb = -nb;
		ret[0] = '-';
	}
	putnbr_to_str(nb, ret, len - 1);
	ft_putstr_fd(ret, fd);
}
