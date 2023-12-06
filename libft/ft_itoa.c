/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 04:23:31 by joaoribe          #+#    #+#             */
/*   Updated: 2023/03/14 00:49:12 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		++i;
	while (n && ++i)
		n /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*bf;
	char	*digits;

	digits = "0123456789";
	len = ft_count(n);
	bf = malloc((len + 1) * sizeof(char));
	if (!bf)
		return (0);
	bf[len] = '\0';
	if (n == 0)
		bf[0] = '0';
	if (n < 0)
		bf[0] = '-';
	while (n)
	{
		if (n > 0)
			bf[--len] = digits[n % 10];
		else
			bf[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (bf);
}
