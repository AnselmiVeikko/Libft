/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:32:16 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 16:35:28 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*result;
	char	str[] = "obiwan";

	result = ft_lstnew(str);
	if (result != 0)
	{
		printf("%s\n%d", (char *)result->content, (int)sizeof(t_list));
		free (result);
	}
	return (0);
}*/
