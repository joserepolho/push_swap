/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:59:45 by yogun             #+#    #+#             */
/*   Updated: 2023/12/21 06:18:02 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rarbsb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_push_index_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	rrarrbsb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_push_index_b(b, c))
		i = ft_lstsize(b) - ft_push_index_b(b, c);
	if ((i < (ft_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	return (i);
}

int	rrarbsb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	i = ft_push_index_b(b, c) + i;
	return (i);
}

int	rarrbsb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_push_index_b(b, c))
		i = ft_lstsize(b) - ft_push_index_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
