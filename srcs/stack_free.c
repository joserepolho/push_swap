/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:38:13 by joaoribe          #+#    #+#             */
/*   Updated: 2023/11/11 02:00:58 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    stack_free(t_stack **stck)
{
    t_stack *tmp;

    if (!stck)
        return ;
    while (*stck)
    {
        tmp = (*stck)->next;
        free(*stck);
        *stck = tmp;
    }
}