/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:04:37 by yogun             #+#    #+#             */
/*   Updated: 2023/12/22 08:54:57 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	do_rarb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*a)->nbr != c && ft_push_index_b(*b, c))
			ft_rr(a, b, 0);
		while ((*a)->nbr != c)
			ft_ra(a, 0);
		while (ft_push_index_b(*b, c) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_push_index_a(*a, c))
			ft_rr(a, b, 0);
		while ((*b)->nbr != c)
			ft_rb(b, 0);
		while (ft_push_index_a(*a, c) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	do_rrarrb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*a)->nbr != c && ft_push_index_b(*b, c))
			ft_rrr(a, b, 0);
		while ((*a)->nbr != c)
			ft_rra(a, 0);
		while (ft_push_index_b(*b, c) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != c && ft_push_index_a(*a, c))
			ft_rrr(a, b, 0);
		while ((*b)->nbr != c)
			ft_rrb(b, 0);
		while (ft_push_index_a(*a, c) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	do_rrarb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*a)->nbr != c)
			ft_rra(a, 0);
		while (ft_push_index_b(*b, c))
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_push_index_a(*a, c))
			ft_rra(a, 0);
		while ((*b)->nbr != c)
			ft_rb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	do_rarrb(t_stack **a, t_stack **b, int c, char d)
{
	if (d == 'a')
	{
		while ((*a)->nbr != c)
			ft_ra(a, 0);
		while (ft_push_index_b(*b, c))
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while (ft_push_index_a(*a, c))
			ft_ra(a, 0);
		while ((*b)->nbr != c)
			ft_rrb(b, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}
