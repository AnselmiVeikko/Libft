/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:24:59 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/07 13:33:50 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*temp;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	while (lst)
	{
		temp = f(lst->content);
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			(*del)(temp);
			ft_lstclear(&new_node, del);
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
