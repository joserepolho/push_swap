/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sames.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:10:02 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 21:46:45 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !b || !(*a) || !(*b) || !((*a)->next) || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !b || !(*a) || !(*b) || !(*a)->next || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = tmp;
	tmp->next = 0;
	tmp = *b;
	*b = (*b)->next;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	tmp->next = 0;
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		i;

	if (!a || !b || !(*a) || !(*b) || !(*a)->next || !((*b)->next))
		return ;
	i = 0;
	tmp = *a;
	*a = ft_tlstlast(*a);
	i = ft_tlstsize(*a);
	(*a)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
	tmp = *b;
	*b = ft_tlstlast(*b);
	i = ft_tlstsize(*b);
	(*b)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
}
