/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:20:49 by joaoribe          #+#    #+#             */
/*   Updated: 2023/11/11 21:14:07 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;

    a = arg_in_stack_a(ac, av);
    if (!a || double_check(a))
    {
        stack_free(&a);
        error_print();
    }
    if(!check_sort(a))
        sort(&a);
    stack_free(&a);
    return (0);
}