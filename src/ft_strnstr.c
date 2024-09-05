/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:05:54 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 18:09:38 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*stack;
	char	*find;
	size_t	i;
	size_t	j;

	stack = (char *) haystack;
	find = (char *) needle;
	i = 0;
	if (find[i] == '\0')
		return (stack);
	while (stack[i] && i < len)
	{
		j = 0;
		while (stack[i + j] == find[j] && find[j] && (i + j) < len)
			j++;
		if (find[j] == '\0')
			return (stack + i);
		i++;
	}
	return (0);
}
