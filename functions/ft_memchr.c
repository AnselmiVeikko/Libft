/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:06:16 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 10:17:46 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;

	str1 = (unsigned char *) str;
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] == c)
			return (&str1[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "obiwanken.com";

	printf("%s", ft_memchr(str, '.', 10));
	return (0);
}*/
