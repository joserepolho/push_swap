/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_times.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 01:57:08 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 21:47:23 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	rarbs(t_stack *a, t_stack *b, int c, char d)
{
	int	i;

	if (d == 'a')
	{
		i = push_index(a, c);
		if (i < get_index(b, c))
			i = get_index(b, c);
	}
	else if (d == 'b')
	{
		i = push_index(b, c);
		if (i < get_index(a, c))
			i = get_index(b, c);
	}
	return (i);
}

int	rrarbs(t_stack *a, t_stack *b, int c, char d)
{
	int	i;

	if (d == 'a')
	{
		if (get_index(b, c))
			i = ft_tlstsize(b) - get_index(b, c);
		i += push_index(a, c);
	}
	else if (d == 'b')
	{
		if (get_index(a, c))
			i = ft_tlstsize(a) - get_index (a, c);
		i += push_index(b, c);
	}
	return (i);
}

int	rarrbs(t_stack *a, t_stack *b, int c, char d)
{
	int	i;

	if (d == 'a')
	{
		if (push_index(a, c))
			i = ft_tlstsize(a) - push_index(a, c);
		i += get_index(b, c);
	}
	else if (d == 'b')
	{
		if (push_index(b, c))
			i = ft_tlstsize(b) - push_index(b, c);
		i += get_index(a, c);
	}
	return (i);
}

int	rrarrbs(t_stack *a, t_stack *b, int c, char d)
{
	int	i;

	if (d == 'a')
	{
		if (push_index(a, c))
			i = ft_tlstsize(a) - push_index(a, c);
		if ((i < (ft_tlstsize(b) - get_index(b, c))) && get_index(b, c))
			i = ft_tlstsize(b) - get_index(b, c);
	}
	else if (d == 'b')
	{
		if (push_index(b, c))
			i = ft_tlstsize(b) - push_index(b, c);
		if ((i < (ft_tlstsize(a) - get_index(a, c))) && get_index(a, c))
			i = ft_tlstsize(a) - get_index(a, c);
	}
	return (i);
}
