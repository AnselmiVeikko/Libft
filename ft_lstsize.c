/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:43:08 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 16:33:24 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*test1;
	t_list	*test2;
	//t_list	*test3;

	test1 = ft_lstnew("okay");
	test2 = ft_lstnew("okay");
	//test3 = ft_lstnew("okay");
	test1->next = test2;
	//test2->next = test3;

	printf("%d", ft_lstsize(test1));
	free (test1);
	free (test2);
	//free (test3);
	return (0);
}*/
