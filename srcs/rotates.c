/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:42:09 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 21:46:57 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;

	if (!a || !(*a) || !((*a)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	while ((*a)->next)
		*a = (*a)->next;
	(*a)->next = tmp;
	tmp->next = 0;
}

void	rb(t_stack **b)
{
	t_stack	*tmp;

	if (!b || !(*b) || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	while ((*b)->next)
		*b = (*b)->next;
	(*b)->next = tmp;
	tmp->next = 0;
}

void	rra(t_stack **a)
{
	int		i;
	t_stack	*tmp;

	if (!a || !(*a) || !((*a)->next))
		return ;
	i = 0;
	tmp = *a;
	*a = ft_tlstlast(*a);
	i = ft_tlstsize(*a);
	(*a)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
}

void	rrb(t_stack **b)
{
	int		i;
	t_stack	*tmp;

	if (!b || !(*b) || !((*b)->next))
		return ;
	i = 0;
	tmp = *b;
	*b = ft_tlstlast(*b);
	i = ft_tlstsize(*b);
	(*b)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
}
