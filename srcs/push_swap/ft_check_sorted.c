/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:54:08 by yogun             #+#    #+#             */
/*   Updated: 2023/12/28 18:29:40 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_checksorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nbr;
	while (stack_a)
	{
		if (i > stack_a->nbr)
			return (0);
		i = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_circle_order_asc(t_stack *stck)
{
	int		j;

	j = 0;
	if (stck < stck->next)
	{
		while (stck && stck->next && stck->nbr < stck->next->nbr)
		{
			stck = stck->next;
			j++;
		}
		if (stck->nbr < ft_lstlast(stck)->nbr)
			return (0);
		stck = stck->next;
		j++;
		while (stck && stck->next && stck->nbr < stck->next->nbr)
		{
			stck = stck->next;
			j++;
		}
	}
	return (j + 1);
}
