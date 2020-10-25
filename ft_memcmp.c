/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:02 by ckasyc            #+#    #+#             */
/*   Updated: 2020/10/25 19:42:16 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1)[i] == ((unsigned char)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char)s1)[i] - ((unsigned char)s2)[i]);
}
