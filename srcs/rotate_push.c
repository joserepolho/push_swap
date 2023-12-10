/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:23:00 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 22:08:53 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	do_rarb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*b)->n != c && push_index(*a, c))
			rr(a, b);
		while ((*b)->n != c)
			rb(b);
		while (push_index(*a, c))
			ra(a);
		pa(a, b);
	}
	else if (d == 'b')
	{
		while ((*a)->n != c && push_index(*b, c))
			rr(a, b);
		while ((*a)->n != c)
			ra(a);
		while (push_index(*b, c))
			rb(b);
		pb(a, b);
	}
}

void	do_rrarb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while (push_index(*a, c))
			rra(a);
		while ((*b)->n != c)
			rb(b);
		pa(a, b);
	}
	else if (d == 'b')
	{
		while ((*a)->n != c)
			rra(a);
		while (push_index(*b, c))
			rb(b);
		pb(a, b);
	}
}

void	do_rarrb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while (push_index(*a, c))
			ra(a);
		while ((*b)->n != c)
			rrb(b);
		pa(a, b);
	}
	else if (d == 'b')
	{
		while ((*a)->n != c)
			ra(a);
		while (push_index(*b, c))
			rrb(b);
		pb(a, b);
	}
}

void	do_rrarrb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*b)->n != c && push_index(*a, c))
			rrr(a, b);
		while ((*b)->n != c)
			rrb(b);
		while (push_index(*a, c))
			rra(a);
		pa(a, b);
	}
	else if (d == 'b')
	{
		while ((*a)->n != c && push_index(*b, c))
			rrr(a, b);
		while ((*a)->n)
			rra(a);
		while (push_index(*b, c))
			rrb(b);
		pb(a, b);
	}
}