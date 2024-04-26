/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:21:47 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/26 17:03:47 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlength(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sublen;

	i = 0;
	sublen = ft_strlength(str + start);
	if (start >= ft_strlength(str))
		sublen = 0; //return (ft_strdup("");
	else if (sublen < len)
		sublen = len;
	sub	= malloc(sizeof(char) * (sublen + 1));
	if (sub == 0)
		return (0);
	while (i < sublen && str[start + i])
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Obiwan Kenobi";
	char	*result;

	result = ft_substr(str, 7, 6);
	printf("%s", result);
	free (result);
	return (0);
}*/
