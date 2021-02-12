/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 14:08:20 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/07 19:21:49 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putnbr(int nb, char *str, int pos)
{
	if ((int)(nb / 10) != 0)
		putnbr((int)(nb / 10), str, pos - 1);
	str[pos] = nb % 10 + '0';
}

int		getlen(int nb)
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

char	*ft_itoa(int nb)
{
	char	*ret;
	int		len;

	len = getlen(nb);
	if (!(ret = malloc((len + 1) * sizeof(char))))
		return (NULL);
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
	putnbr(nb, ret, len - 1);
	return (ret);
}
