/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:47:53 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 22:07:23 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	cheapest_double_rotate(t_stack *a, t_stack *b, char c)
{
	int		i;
	t_stack	*tmp;

	if (c == 'a')
		tmp = a;
	else if (c == 'b')
		tmp = b;
	i = rrarrbs(a, b, b->n, c);
	while (tmp)
	{
		if (i > rarbs(a, b, tmp->n, c))
			i = rarbs(a, b, tmp->n, c);
		if (i > rrarrbs(a, b, tmp->n, c))
			i = rrarrbs(a, b, tmp->n, c);
		if (i > rarrbs(a, b, b->n, c))
			i = rarrbs(a, b, b->n, c);
		if (i > rrarbs(a, b, b->n, c))
			i = rrarbs(a, b, b->n, c);
		tmp = tmp->next;
	}
	return (i);
}
