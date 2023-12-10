/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 21:16:03 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 21:47:47 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_index(t_stack *s, int n)
{
	int	i;

	i = 0;
	while (s->n != n)
	{
		s = s->next;
		i++;
	}
	return (i);
}

int	push_index(t_stack *s, int n)
{
	int		i;

	if (n > s->n && n < ft_tlstlast(s)->n)
		i = 0;
	else if (n > ft_max(s) || n < ft_min(s))
		i = get_index(s, ft_max(s));
	else
	{
		i = 1;
		while (n < s->n)
		{
			s = s->next;
			i++;
		}
	}
	return (i);
}
