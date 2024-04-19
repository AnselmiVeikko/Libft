/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:37:32 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 10:50:17 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;
	unsigned int		i;

	dest1 = (unsigned char *) dest;
	src1 = (const unsigned char *) src;
	i = 0;
	if (dest1 >= src1)
	{
		while (n > 0)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char str[] = "Hello";

	//printf("%s", ft_memmove(str + 1, str, 3));
	printf("%s", memmove(str + 1, str, 3));
	return (0);
}*/
