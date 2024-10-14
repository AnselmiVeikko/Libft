/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:21:04 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 17:59:09 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	dest = (unsigned char *) dst;
	source = (const unsigned char *) src;
	i = 0;
	if (!source && !dest)
		return (0);
	while (n > 0)
	{
		dest[i] = source[i];
		i++;
		n--;
	}
	return (dest);
}
