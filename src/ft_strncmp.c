/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:43:50 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 18:04:12 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] && p2[i] && i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
