/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:37:28 by joaoribe          #+#    #+#             */
/*   Updated: 2023/11/11 01:19:39 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	add_to_stack(t_stack **stack, int n)
{
	t_stack	*for_a;
	
	for_a = malloc(sizeof(t_stack));
	if (!for_a)
		error_print();
	for_a->nbr = n;
	for_a->next = 0;
	if (!stack)
		return ;
	if (!*stack)
		*stack = for_a;
	else
		(ft_lstlast(*stack))->next = for_a;
}