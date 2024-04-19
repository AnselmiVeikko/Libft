/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:43:50 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 11:16:09 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] && p2[i] && i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "fooo~";
	char	str2[] = "fooo\0";
	int		x;
	int		i;

	x = ft_strncmp(str1, str2, 7);
	i = strncmp(str1, str2, 7);
	printf("%d\n%d", x, i);
	return (0);
}*/
