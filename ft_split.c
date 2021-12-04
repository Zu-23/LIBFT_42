/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:04:50 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/12/04 17:26:22 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	cwords(const char *str, char c)
{
	int	words;
	int	isc;

	words = 1;
	isc = 0;
	if (str[0] == c)
		words--;
	while (*str)
	{
		if (*str == c)
			isc = 1;
		else if (isc)
		{
			isc = 0;
			words++;
		}
		str++;
	}
	return (words);
}

static char	*split_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**split2(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		ndx;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	ndx = -1;
	while (i <= len)
	{
		if (s[i] != c && ndx < 0)
			ndx = i;
		else if ((s[i] == c || i == len) && ndx >= 0)
		{
			split[j++] = split_word(s, ndx, i);
			ndx = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((cwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (split2(split, s, c));
}
