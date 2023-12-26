/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 04:09:24 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/19 04:12:45 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_order(t_stack **stack_a)
{
	if (ft_lstsize(*stack_a) / 2 > ft_find_index(*stack_a, ft_min(*stack_a)))
	{
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_ra(stack_a, 0);
	}
	else
	{
		while (ft_find_index(*stack_a, ft_min(*stack_a)))
			ft_rra(stack_a, 0);
	}
}
