/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:05:54 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/18 16:46:29 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*stack;
	char	*find;
	size_t	i;
	size_t	x;

	stack = (char *) haystack;
	find = (char *) needle;
	x = 0;
	i = 0;
	if (find[i] == '\0')
		return (stack);
	while (stack[i] != '\0' && i < len)
	{
		if (stack[i] == find[x])
		{
			while (stack[i + x] == find[x] && (i + x) < len)
				x++;
			if (find[x] == '\0')
				return (stack + i);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "like a needle in a haystack";
	char	str2[] = "needle";

	printf("%s", ft_strnstr(str, str2, 15));
}*/
