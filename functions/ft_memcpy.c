/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:21:04 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 10:48:08 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	size_t				x;

	dest1 = (unsigned char *) dest;
	src1 = (const unsigned char *) src;
	x = 0;
	while (src1[x] != '\0' && n > 0)
	{
		dest1[x] = src1[x];
		x++;
		n--;
	}
	dest1[x] = '\0';
	return (dest1);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[4];
	char	src[] = "kenobi-obiwan";
	printf("%s", ft_memcpy(dest, src, strlen(src)));
	return (0);
}*/
