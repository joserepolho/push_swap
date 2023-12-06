/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:33 by joaoribe          #+#    #+#             */
/*   Updated: 2023/11/12 01:32:52 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int check_sort(t_stack *stck)
{
    int i;

    while (stck && stck->next)
    {
        i = stck->nbr;
        stck = stck->next;
        if (i > stck->nbr)
            return (0);
    }
    return (1);
}