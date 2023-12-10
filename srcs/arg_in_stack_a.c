/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_in_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:37:04 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 02:09:05 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*split_and_stack(char *s)
{
	int		i;
	int		n;
	t_stack	*a;
	char	**spl;

	a = 0;
	i = 0;
	spl = ft_split(s, ' ');
	while (spl[i])
	{
		check_digits(spl[i]);
		n = ft_atoi(spl[i]);
		check_lims(n);
		add_to_stack(&a, n);
		i++;
	}
	free_double(spl);
	return (a);
}

void	check_lims(int n)
{
	if (n > 2147483647 || n < -2147483648)
		error_print();
}

void	check_digits(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			error_print();
		i++;
	}
}

t_stack	*arg_in_stack_a(int ac, char **av)
{
	int		i;
	int		n;
	t_stack	*a;

	a = 0;
	i = 1;
	if (ac < 2)
		error_print();
	else if (ac == 2)
		a = split_and_stack(av[1]);
	else
	{
		while (i < ac)
		{
			check_digits(av[i]);
			n = ft_atoi(av[i]);
			check_lims(n);
			add_to_stack(&a, n);
			i++;
		}
	}
	return (a);
}
