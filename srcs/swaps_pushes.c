/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_pushes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:08:15 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/06 00:01:58 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void    sa(t_stack **a)
{
    t_stack *tmp;

    if (!a || !(*a) || !((*a)->next))
        return ;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
}

void    sb(t_stack **b)
{
    t_stack *tmp;

    if (!b || !(*b) || !((*b)->next))
        return ;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
}

void    pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!b || !*b)
        return ;
    tmp = *a;
    *a = *b;
    (*a)->next = tmp;
    *b = (*b)->next;
}

void    pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (!a || !*a)
        return ;
    tmp = *b;
    *b = *a;
    (*b)->next = tmp;
    *a = (*a)->next;
}