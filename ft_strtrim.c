/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:43:40 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/23 14:09:42 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
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

static int	ft_getlength(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i + j])
	{
		if (ft_checkset(s1[i + j], set))
			j++;
		else
			i++;
	}
	return (i);
}

char	*ft_strtrim(char const *oldstr, char const *set)
{
	char	*newstr;
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	if (set == 0)
		return ((char *) oldstr);
	newstr = malloc (sizeof (char) * (ft_getlength(oldstr, set) + 1));
	if (newstr == 0)
		return (0);
	while (oldstr[index] != '\0')
	{
		if (!ft_checkset(oldstr[index], set))
		{
			newstr[index2] = oldstr[index];
			index2++;
		}
		index++;
	}
	newstr[index2] = '\0';
	return (newstr);
}
