/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 13:16:13 by yogun             #+#    #+#             */
/*   Updated: 2023/12/21 07:19:36 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_find_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->nbr != nbr)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	ft_push_index_b(t_stack *s, int nb)
{
	int		i;
	t_stack	*tmp;

	if (nb > s->nbr && nb < ft_lstlast(s)->nbr)
		i = 0;
	else if (nb > ft_max(s) || nb < ft_min(s))
		i = ft_find_index(s, ft_max(s));
	else
	{
		i = 1;
		while (nb > s->nbr || nb < s->next->nbr)
		{
			s = s->next;
			i++;
		}
	}
	return (i);
}

int	ft_push_index_a(t_stack *s, int nb)
{
	int		i;
	t_stack	*tmp;

	if (nb < s->nbr && nb > ft_lstlast(s)->nbr)
		i = 0;
	else if (nb > ft_max(s) || nb < ft_min(s))
		i = ft_find_index(s, ft_min(s));
	else
	{
		i = 1;
		while (nb < s->nbr || nb > s->next->nbr)
		{
			s = s->next;
			i++;
		}
	}
	return (i);
}
