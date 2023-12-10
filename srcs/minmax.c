/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:00:37 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 19:45:58 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_min(t_stack *s)
{
	int	i;

	i = s->n;
	while (s)
	{
		if (i > s->n)
			i = s->n;
		s = s->n;
	}
	return (i);
}

int	ft_max(t_stack *s)
{
	int	i;

	i = s->n;
	while (s)
	{
		if (i < s->n)
			i = s->n;
		s = s->n;
	}
	return (i);
}
