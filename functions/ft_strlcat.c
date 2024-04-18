/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:54:08 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/18 13:43:00 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	srclen;
	unsigned int	dstlen;

	x = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	srclen = i;
	i = 0;
	while (dst[i] != '\0')
		i++;
	dstlen = i;
	while (i < (dstsize - 1))
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	if (dstlen > dstsize)
		dstlen = dstsize;
	return ((srclen + dstlen));
}
/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str[15] = "Obiwan";
	char	str2[] = "Kenobi";
	int		x;

	x = ft_strlcat(str, str2, 3);
	ft_strlcat(str, str2, 3);
	printf("%s\n%d", str, x);
	return (0);
}*/
