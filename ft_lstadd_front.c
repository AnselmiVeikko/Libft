/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:14:09 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/29 17:36:09 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == 0)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	**res;
	t_list	*new;

	res = (t_list **)malloc(sizeof(t_list));
	new = ft_lstnew("hello there");
	ft_lstadd_front(res, new);
	printf("%s", res[0]->content);
	free (res);
	return (0);
}*/
