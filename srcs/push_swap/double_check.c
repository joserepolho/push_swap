/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:18:42 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/19 05:32:18 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	double_check(t_stack *a)
{
	t_stack	*chk;

	while (a)
	{
		chk = a->next;
		while (chk)
		{
			if (a->nbr == chk->nbr)
				return (1);
			chk = chk->next;
		}
		a = a->next;
	}
	return (0);
}
