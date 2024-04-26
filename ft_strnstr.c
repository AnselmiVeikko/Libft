/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:05:54 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/26 15:53:11 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*stack;
	char	*find;
	size_t	i;
	size_t	x;

	stack = (char *) haystack;
	find = (char *) needle;
	i = 0;
	if (find[i] == '\0')
		return (stack);
	while (stack[i] && i < len)
	{
		x = 0;
		while (stack[i + x] == find[x] && find[x] && (i + x) < len)
			x++;
		if (find[x] == '\0')
			return (stack + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	stack[] = "like a needle in a haystack";

	printf("%s", ft_strnstr(stack, stack + 15, 5));
}*/
