/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:33:54 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 22:25:58 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_b_sort(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (ft_tlstsize(*a) > 3 && !check_sort(*a))
	{
		tmp = *a;
		i = cheapest_double_rotate(*a, *b, 'b');
		while (i >= 0)
		{
			if (i == rarbs(*a, *b, tmp->n, 'b'))
				i = do_rarb(a, b, tmp->n, 'b');
			else if (i == rrarbs(*a, *b, tmp->n, 'b'))
				i = do_rrarb(a, b, tmp->n, 'b');
			else if (i == rarrbs(*a, *b, tmp->n, 'b'))
				i = do_rarrb(a, b, tmp->n, 'b');
			else if (i == rrarrbs(*a, *b, tmp->n, 'b'))
				i = do_rrarrb(a, b, tmp->n, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	push_a_sort(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = cheapest_double_rotate(*a, *b, 'a');
		while (i )
			if (i == rarbs(*a, *b, tmp->n, 'a'))
				i = do_rarb(a, b, tmp->n, 'a');
			else if (i == rrarbs(*a, *b, tmp->n, 'a'))
				i = do_rrarb(a, b, tmp->n, 'a');
			else if (i == rarrbs(*a, *b, tmp->n, 'a'))
				i = do_rarrb(a, b, tmp->n, 'a');
			else if (i == rrarrbs(*a, *b, tmp->n, 'a'))
				i = do_rrarrb(a, b, tmp->n, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->n)
	{
		rra(a);
		sa(a);
	}
	else if (ft_max(*a) == (*a)->n)
	{
		ra(a);
		if (!check_sort(*a))
			sa(a);
	}
	else
	{
		if (get_index(*a, ft_min(*a)) == 1)
			sa(a);
		else
			rra(a);
	}
}

void	sort(t_stack **a)
{
	t_stack	*b;

	b = 0;
	if (ft_tlstsize(*a) == 2)
		sa(a);
	else
	{
		if (!check_circle_sort(*a))
		{
			pb(a, &b);
			if (ft_tlstsize(*a) > 3 && !check_sort(*a))
				pb(a, &b);
			if (ft_tlstsize(*a) > 3 && !check_sort(*a))
				push_b_sort(a, &b);
			if (ft_tlstsize(*a) == 3 && !check_sort(*a))
				sort_three(a);
			a = push_a_sort(a, &b);
		}
		order(a);
	}
}
