/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 01:11:21 by joaoribe          #+#    #+#             */
/*   Updated: 2023/04/28 00:55:32 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*substr;

	i = start;
	k = ft_strlen(s);
	j = 0;
	if (i >= k)
		len = 0;
	else if (len > (k - i))
		len = k - i;
	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (0);
	while (i < k && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
