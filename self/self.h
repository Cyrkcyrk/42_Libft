/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   self.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 19:55:17 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 20:17:07 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_SELF_H
# define S_SELF_H

#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	*ft_print_memory(void *addr, unsigned int size);
char	**ft_split(char *str, char *charset);
int		ft_str_is_alpha(char *str);
int		ft_str_is_digit(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strstr(char *str, char *to_find);

#endif
