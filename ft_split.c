/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:38:34 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/24 19:07:15 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *str, char c)
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

char	**ft_split(char const *str, char c)
{
	char	**ret;
	size_t	word_len;
	int		i;

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
			if (!ft_strchr(str, c))
				word_len = ft_strlen(str);
			else
				word_len = ft_strchr(str, c) - str;
			ret[i] = ft_substr(str, 0, word_len);
			str += word_len;
			i++;
		}
	}
	ret[i] = 0;
	return (ret);
}
