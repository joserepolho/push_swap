/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:13:30 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/13 01:57:36 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*bf;
	size_t	len;

	len = ft_strlen(s) + 1;
	bf = malloc(len * sizeof(char));
	if (!bf)
		return (0);
	ft_memcpy(bf, s, len);
	return (bf);
}
