/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:50:07 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 21:47:37 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	order(t_stack **s)
{
	if (ft_tlstsize(*s) / 2 > get_index(*s, ft_min(*s)))
	{
		while (get_index(*s, ft_min(*s)))
			ra(s);
	}
	else
	{
		while (get_index(*s, ft_min(*s)))
			rra(s);
	}
}
