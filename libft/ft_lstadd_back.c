/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:52:37 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/14 01:44:29 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*med;

	if (!new)
		return ;
	med = ft_lstlast(*lst);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	med->next = new;
}
