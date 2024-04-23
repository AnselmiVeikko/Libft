/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:16:58 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/23 19:23:10 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "nice one brotherus";
	char	**result;
	int		i;

	i = 0;
	result = ft_split(str, ' ');
	while (i < 3)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
