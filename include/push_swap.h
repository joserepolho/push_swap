/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:21:57 by joaoribe          #+#    #+#             */
/*   Updated: 2023/10/18 03:35:39 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"

typedef struct s_stack
{
    long    nbr;
    long    index;
    struct s_stack  *next;
    struct s_stack  *prev;
}   t_stack;