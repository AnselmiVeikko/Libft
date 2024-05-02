/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:33:31 by ahentton          #+#    #+#             */
/*   Updated: 2024/05/02 17:01:19 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	ft_freecont(void *content)
{
	free (content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
		lst = 0;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Delthis");
	ft_lstdelone(node, ft_freecont);
	printf("%s", node->content);
	return (0);
}*/
