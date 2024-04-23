/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:16:58 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/23 14:03:47 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "m;er;cu;;));__;;__)ry_) ";
	char	str2[] ="_ ;em)_";

	printf("%s", ft_strtrim(str, str2));
	return (0);
}
