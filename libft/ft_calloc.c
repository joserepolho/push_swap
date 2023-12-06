/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:24:30 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/13 23:26:58 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*bf;

	bf = malloc(nmemb * size);
	if (!bf)
		return (0);
	ft_memset(bf, 0, nmemb * size);
	return (bf);
}
