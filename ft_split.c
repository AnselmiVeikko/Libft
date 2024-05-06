/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:38:34 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 18:59:37 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *str, char c)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_memcheck(char **arr, size_t i)
{
	size_t	j;

	j = 0;
	if (arr[i] == 0)
	{
		while (i >= j)
		{
			free (arr[j]);
			j++;
		}
		free (arr);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char	**ret;
	size_t	word_len;
	size_t	i;

	i = 0;
	ret = (char **)malloc (sizeof(char *) * (ft_wordcount(str, c) + 1));
	if ((str == 0) || (ret == 0))
		return (0);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str)
		{
			word_len = ft_strchr(str, c) - str;
			if (ft_strchr(str, c) == 0)
				word_len = ft_strlen(str);
			ret[i++] = ft_substr(str, 0, word_len);
			if (ft_memcheck(ret, i - 1) == 0)
				return (0);
			str += word_len;
		}
	}
	ret[i] = 0;
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	str[] = "I will split   this  string";
	char		set = ' ';
	int			i = 0;
	char		**ret = ft_split(str, set);

	while (i < 5)
		printf("%s\n", ret[i++]);
	return (0);
}*/
