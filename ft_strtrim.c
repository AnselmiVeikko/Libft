/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:43:40 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/26 17:25:26 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;
	int		index;

	start = 0;
	end = 0;
	index = 0;
	if (set == 0)
		return ((char *) s1);
	while (ft_isset(s1[start], set))
		start++;
	while (s1[end + 1])
		end++;
	while (ft_isset(s1[end], set))
		end--;
	ret = malloc (sizeof (char) * (end - start));
	if (ret == 0)
		return (0);
	while (start <= end)
		ret[index++] = s1[start++];
	ret[index] = '\0';
	return (ret);
}
