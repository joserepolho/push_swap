/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:33 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 22:08:10 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_sort(t_stack *stck)
{
	int	i;

	while (stck && stck->next)
	{
		i = stck->n;
		stck = stck->next;
		if (i > stck->n)
			return (0);
	}
	return (1);
}

int	check_circle_sort(t_stack *stck)
{
	int	i;
	
	if (stck > stck->next)
		i = check_circle_order_desc(stck);
	else
		i = check_circle_order_asc(stck);
	if (i == ft_tlstsize(stck))
		return (1);
	return (0);
}

int	check_circle_order_desc(t_stack *stck)
{
	int	i;
	int	j;

	j = 0;
	if (stck > stck->next)
	{
		while (stck && stck->next && stck > stck->next)
		{
			i = stck->n;
			stck = stck->next;
			if (i > stck->n)
				j++;
		}
		stck = stck->next;
		j++;
		while (stck && stck->next && stck > stck->next)
		{
			i = stck->n;
			stck = stck->next;
			if (i > stck->n)
				j++;
		}
	}
	return (j);
}

int	check_circle_order_asc(t_stack *stck)
{
	int	i;
	int	j;

	j = 0;
	if (stck < stck->next)
	{
		while (stck && stck->next && stck < stck->next)
		{
			i = stck->n;
			stck = stck->next;
			if (i > stck->n)
				j++;
		}
		stck = stck->next;
		j++;
		while (stck && stck->next && stck < stck->next)
		{
			i = stck->n;
			stck = stck->next;
			if (i > stck->n)
				j++;
		}
	}
	return (j);
}
