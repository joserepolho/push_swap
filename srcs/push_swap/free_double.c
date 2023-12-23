/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:33:29 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/19 05:34:24 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	free_double(char **s)
{
	char	*tmp;

	if (!s)
		return ;
	while (*s)
	{
		tmp = *s;
		s++;
		free(tmp);
	}
}
