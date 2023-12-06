/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 04:23:39 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/05 04:44:41 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*bf;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	bf = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!bf || !s1 || !s2)
		return (0);
	while (s1[i])
	{
		bf[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		bf[i + j] = s2[j];
		j++;
	}
	bf[i + j] = '\0';
	return (bf);
}
