/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:47:55 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 10:13:02 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	char	*str1;
	int		i;
	int		ret;
	int		minus;

	str1 = (char *) str;
	i = 0;
	ret = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			minus = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			ret *= 10 + str[i] + '0';
			i++;
		}
	}
	if (minus == 1)
		return (ret * (-1));
	return (ret);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = "2147483648";

	printf("%d\n%d", ft_atoi(str), atoi(str));
	return (0);

}
