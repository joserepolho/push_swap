/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:38:42 by yogun             #+#    #+#             */
/*   Updated: 2023/12/23 08:51:59 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a, 0);
		ft_sa(a, 0);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a, 0);
		if (!ft_checksorted(*a))
			ft_sa(a, 0);
	}
	else
	{
		if (ft_find_index(*a, ft_min(*a)) == 1)
			ft_sa(a, 0);
		else
			ft_rra(a, 0);
	}
}

void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack_a;
	i = cheapest_rotate_b(*stack_a, *stack_b);
	while (i >= 0)
	{
		if (i == rarbsb(*stack_a, *stack_b, tmp->nbr))
			i = do_rarb(stack_a, stack_b, tmp->nbr, 'a');
		else if (i == rrarrbsb(*stack_a, *stack_b, tmp->nbr))
			i = do_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
		else if (i == rarrbsb(*stack_a, *stack_b, tmp->nbr))
			i = do_rarrb(stack_a, stack_b, tmp->nbr, 'a');
		else if (i == rrarbsb(*stack_a, *stack_b, tmp->nbr))
			i = do_rrarb(stack_a, stack_b, tmp->nbr, 'a');
		else
			tmp = tmp->next;
	}
}

void	ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = cheapest_rotate_a(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*a, *b, tmp->nbr))
				i = do_rarb(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rarrb_a(*a, *b, tmp->nbr))
				i = do_rarrb(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rrarrb_a(*a, *b, tmp->nbr))
				i = do_rrarrb(a, b, tmp->nbr, 'b');
			else if (i == ft_case_rrarb_a(*a, *b, tmp->nbr))
				i = do_rrarb(a, b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort(t_stack **a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = 0;
	if (ft_lstsize(*a) == 2)
		ft_sa(a, 0);
	else
	{
		if (ft_lstsize(*a) == 3)
			ft_sort_three(a);
		else
		{
			if (check_circle_order_asc(*a) == ft_lstsize(*a))
				ft_order(a);
			ft_pb(a, &stack_b, 0);
			if (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
				ft_pb(a, &stack_b, 0);
			while (ft_lstsize(*a) > 3 && !ft_checksorted(*a))
				ft_sort_b_till_3(a, &stack_b);
			if (ft_lstsize(*a) == 3 && !ft_checksorted(*a))
				ft_sort_three(a);
			ft_sort_a(a, &stack_b);
		}
		ft_order(a);
	}
}
