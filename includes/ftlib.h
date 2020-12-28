/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:51:03 by ckasyc            #+#    #+#             */
/*   Updated: 2020/12/28 14:59:14 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_BUFF_H
# define S_BUFF_H
/*
** Memory
*/
void			*ft_memcpy (void *dest, const void *src, size_t n);
void			ft_bzero (void *s, size_t n);
void			*ft_memcpy (void *dest, const void *src, size_t n);
void			*ft_memmove (void *dest, const void *src, size_t n);
void			*ft_memchr (const void *s, int c, size_t n);
int				ft_memcmp(void *s1, void *s2, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
/*
** Strings
*/
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(char *str, char *to_find, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strdup(char *str);
/*
** characters control
*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);


#endif
