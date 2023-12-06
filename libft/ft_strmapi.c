/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 05:12:38 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/11 01:59:55 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*bf;

	i = 0;
	bf = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s || !bf)
		return (0);
	while (s[i])
	{
		bf[i] = f(i, s[i]);
		i++;
	}
	bf[i] = '\0';
	return (bf);
}
