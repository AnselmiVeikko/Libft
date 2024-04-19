/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:47:55 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 12:40:18 by ahentton         ###   ########.fr       */
/*   Updated: 2024/04/18 20:40:38 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*str1;
	int		i;
	int		ret;
	int		minus;

	str1 = (char *) str;
	i = 0;
	ret = 0;
	minus = 0;
	while ((str1[i] >= 9 && str1[i] <= 13) || (str1[i] == 32))
		i++;
	if ((str1[i] == '-') || (str1[i] == '+'))
	{
		if (str1[i] == '-')
			minus++;
		i++;
	}
	while (str1[i] >= '0' && str1[i] <= '9')
	{
		ret = ret * 10 + str1[i] - '0';
		i++;
	}
	if (minus == 1)
		return (ret * (-1));
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "	 -21ab47";

	printf("%d\n%d", ft_atoi(str), atoi(str));
	return (0);
}*/
