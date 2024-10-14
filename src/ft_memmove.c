/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:37:32 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 17:59:50 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static void	*ft_revmove(unsigned char *dst, const unsigned char *src, size_t n)
{
	while (n > 0)
	{
		dst[n - 1] = src[n - 1];
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	dest = (unsigned char *) dst;
	source = (const unsigned char *) src;
	i = 0;
	if (!dest && !source)
		return (0);
	if (dest >= source)
		dest = ft_revmove(dest, source, n);
	else
	{
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
