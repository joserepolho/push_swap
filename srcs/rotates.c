/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:42:09 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/05 23:54:18 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    ra(t_stack **a)
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

void	ft_rra(t_stack **a)
{
	int	i;
	t_stack	*tmp;

	if (!a || !(*a) || !((*a)->next))
		return ;
	i = 0;
	tmp = *a;
	*a = ft_lstlast(*a);
	i = ft_lstsize(*a);
	(*a)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
}

void	rrb(t_stack **b)
{
	int	i;
	t_stack	*tmp;

	if (!b || !(*b) || !((*b)->next))
		return;
	i = 0;
	tmp = *b;
	*b = ft_lstlast(*b);
	i = ft_lstsize(*b);
	(*b)->next = tmp;
	while (i-- > 1)
		tmp = tmp->next;
	tmp->next = 0;
}