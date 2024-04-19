/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:51:15 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 11:14:54 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	srclen;

	i = 0;
	while (src[i] != '\0')
		i++;
	srclen = i;
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str[] = "Obiwan man";
	char	str2[] = "Kenobi";

	//ft_strlcpy(str, str2, 7);
	strlcpy(str, str2, 7);
	printf("%s", str);
	return (0);
}*/
