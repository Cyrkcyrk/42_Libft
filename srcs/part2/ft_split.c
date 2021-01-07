/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckasyc <ckasyc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 15:16:45 by ckasyc            #+#    #+#             */
/*   Updated: 2021/01/07 19:23:05 by ckasyc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char *s, char c)
{
	int i;
	int	count;

	count = 0;
	i = 0;
	while (s[++i])
		if (s[i] == c && s[i - 1] != c)
			count++;
	if (s[i - 1] != c)
		count++;
	return (count);
}

char	*ft_create_word(char *s, char c, int *len)
{
	int		i;
	char	*ret;
	int		wordlen;

	wordlen = 0;
	while (s[wordlen] != '\0' && s[wordlen] != c)
		wordlen += 1;
	*len = wordlen;
	if (wordlen == 0)
		return ("");
	ret = malloc((wordlen + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[wordlen] = '\0';
	i = -1;
	while (++i < wordlen)
		ret[i] = s[i];
	return (ret);
}

char	**ft_fill_tab(char *s, char c, char **ret)
{
	int		word;
	int		len;

	word = 0;
	while (*s != '\0')
	{
		ret[word] = ft_create_word(s, c, &len);
		if (ret[word] == NULL)
			return (NULL);
		if (len > 0)
			word++;
		s += len;
		if (*s != '\0')
			s++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**ret;
	int		len_str;

	len_str = 0;
	while (s[len_str])
		len_str++;
	if (len_str == 0)
	{
		ret = malloc(sizeof(char*));
		ret[0] = NULL;
		return (ret);
	}
	wordcount = ft_count_word((char *)s, c);
	ret = malloc((wordcount + 1) * sizeof(char*));
	if (ret == NULL)
		return (NULL);
	ret = ft_fill_tab((char *)s, c, ret);
	if (ret == NULL)
		return (NULL);
	ret[wordcount] = NULL;
	return (ret);
}
