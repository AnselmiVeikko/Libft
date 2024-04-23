/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:12:04 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/23 19:34:57 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	int	wordcount;
	int	i;

	i = 0;
	wordcount = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			wordcount++;
		i++;
	}
	return (wordcount);
}

static int	ft_wordlength(char const *str, int i, char c)
{
	int	wordlength;

	wordlength = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		wordlength++;
		if (str[i + 1] == c)
			return (wordlength);
		i++;
	}
	return (0);
}

static char	*ft_copyword(char const *str, int i, char c)
{
	char	*word;
	int		index;

	index = 0;
	word = malloc (sizeof (char) * ft_wordlength(str, i, c));
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		word[index] = str[i];
		if ((str[i + 1] == c) || (str[i + 1] == '\0'))
		{
			word[index + 1] = '\0';
			return (word);
		}
		i++;
		index++;
	}
	return (0);
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ret = malloc (sizeof (char *) * ft_countwords(str, c));
	if (ret == 0)
		return (0);
	while (str[i] != '\0')
	{
		ret[j++] = ft_copyword(str, i, c);
		i++;
	}
	ret[j][0] = '\0';
	return (ret);
}
