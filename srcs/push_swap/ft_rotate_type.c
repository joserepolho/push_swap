/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:04:06 by yogun             #+#    #+#             */
/*   Updated: 2023/12/21 06:27:42 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	cheapest_rotate_b(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = rrarrbsb(a, b, tmp->nbr);
	while (tmp)
	{
		if (i > rarbsb(a, b, tmp->nbr))
			i = rarbsb(a, b, tmp->nbr);
		if (i > rrarrbsb(a, b, tmp->nbr))
			i = rrarrbsb(a, b, tmp->nbr);
		if (i > rarrbsb(a, b, tmp->nbr))
			i = rarrbsb(a, b, tmp->nbr);
		if (i > rrarbsb(a, b, tmp->nbr))
			i = rrarbsb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	cheapest_rotate_a(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, tmp->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->nbr))
			i = ft_case_rarb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_a(a, b, tmp->nbr))
			i = ft_case_rrarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rarrb_a(a, b, tmp->nbr))
			i = ft_case_rarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarb_a(a, b, tmp->nbr))
			i = ft_case_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
