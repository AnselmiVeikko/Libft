/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:43:40 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/23 12:13:31 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	str = malloc (sizeof (char) * (ft_strlen(s1) + 1));
	if (str == 0)
		return (0);
	while (s1[i] != '\0')
	{
		y = 0;
		while (set[y] != '\0')
		{
			if (s1[i] == set[y])
				i++;
			else
			{
				str[x] = s1[i];
				x++;
				i++;
			}
			y++;
		}
		str[x] = '\0';
	}
	return (str);
}
