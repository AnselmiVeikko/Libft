/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:38:43 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/17 17:16:08 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	x;
	char			*str1;
	unsigned char	c1;

	str1 = (char *) str;
	c1 = (unsigned char) c;
	x = 0;
	while (x < n)
	{
		str1[x] = c;
		x++;
	}
	return (str1);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str[] = "123456789";
	int				c = 'q';
	unsigned int	n = 2;
	printf("%s\n", ft_memset(str, c, n));
	//printf("%s", memset(str, c, n));
	return (0);
			
}*/
