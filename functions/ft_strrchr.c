/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:17:53 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/19 11:15:58 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		x;
	char	*ret;

	ret = (char *) str;
	i = 0;
	if (c == '\0')
		return (0);
	while (ret[i] != '\0')
	{
		if (ret[i] == c)
			x = i;
		i++;
	}
	return (&ret[x]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "obi.wank..en..\0.com";
	char	*result;

	result = ft_strrchr(str, 'n');
	printf("%s", result);
	return (0);
}*/
