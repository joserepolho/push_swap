/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:33:29 by joaoribe          #+#    #+#             */
/*   Updated: 2023/11/11 01:20:15 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    free_double(char **s)
{
    char    *tmp;

    if (!s)
        return ;
    while (*s)
    {
        tmp = *s;
        free(tmp);
        s++;
    }
    free(s);
}