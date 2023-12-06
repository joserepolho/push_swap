/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 05:12:49 by joaoribe          #+#    #+#             */
/*   Updated: 2023/04/15 02:03:36 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nd;
	t_list	*new_list;

	new_list = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		nd = ft_lstnew(f(lst->content));
		if (!nd)
		{
			del(nd);
			return (0);
		}
		ft_lstadd_back(&new_list, nd);
		lst = lst->next;
	}
	return (new_list);
}
