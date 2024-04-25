/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:13:34 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/25 18:31:23 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*res;
	int		i;

	i = 0;
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	res = ft_itoa(n);
	while (res[i] != '\0')
	{
		write (fd, &res[i], 1);
		i++;
	}
}
