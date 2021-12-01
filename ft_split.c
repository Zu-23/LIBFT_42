/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:04:50 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/11/23 12:06:08 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	cwords(const char *str, char c)
{	
	int words;
	int isC;

	words = 1;
	isC = 0;
	if (str[0] == c) words--;
	while (*str)
	{
		if (*str == c)
			isC = 1;
		else if (isC)
		{
			isC = 0;
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

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((cwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = split_word(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
