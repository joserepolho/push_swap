/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_in_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 04:37:04 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/23 14:47:13 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	check_lims(t_stack **a, long long int n, char **spl, int i)
{
	if (n > INT_MAX || n < INT_MIN)
	{
		if (spl)
		{
			free(spl[i]);
			free(spl);
		}
		stack_free(a);
		ft_error();
	}
}

void	check_digits(t_stack **a, char *s, char **spl, int j)
{
	int	i;

	i = 0;
	if ((s[0] == '-' || s[0] == '+') && s[1])
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			if (spl)
			{
				free(spl[j]);
				free(spl);
			}
			stack_free(a);
			ft_error();
		}
		i++;
	}
}

t_stack	*split_and_stack(char *s)
{
	int				i;
	long long int	n;
	t_stack			*a;
	char			*tmp;
	char			**spl;

	a = 0;
	i = 0;
	spl = ft_split(s, ' ');
	while (spl[i])
	{
		check_digits(&a, spl[i], spl, i);
		n = ft_atoi(spl[i]);
		check_lims(&a, n, spl, i);
		add_to_stack(&a, n);
		tmp = spl[i];
		free(tmp);
		i++;
	}
	free(spl);
	return (a);
}

t_stack	*arg_in_stack_a(int ac, char **av)
{
	int				i;
	long long int	n;
	t_stack			*a;

	a = 0;
	i = 1;
	if (ac == 2)
		a = split_and_stack(av[1]);
	else
	{
		while (i < ac)
		{
			check_digits(&a, av[i], 0, 0);
			n = ft_atoi(av[i]);
			check_lims(&a, n, 0, 0);
			add_to_stack(&a, n);
			i++;
		}
	}
	return (a);
}
