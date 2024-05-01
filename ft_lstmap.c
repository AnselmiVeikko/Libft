/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:01:53 by ahentton          #+#    #+#             */
/*   Updated: 2024/04/30 14:18:40 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;

	start = 0;
	if (lst == 0 || f == 0 || del == 0)
		return (0);
	while (lst)
	{
		if ((temp = ft_lstnew(*f)((lst->content))) == 0)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		ft_lstadd_back(&start, temp);
		lst = lst->next;
	}
	return (start);
}
