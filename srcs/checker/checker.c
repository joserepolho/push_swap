/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:46:09 by yogun             #+#    #+#             */
/*   Updated: 2023/12/22 11:19:59 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	do_cmd(t_stack **a, t_stack **b, char *cmd)
{
	if (!ft_strncmp(cmd, "sa\n", 3))
		ft_sa(a, 1);
	else if (!ft_strncmp(cmd, "sb\n", 3))
		ft_sb(b, 1);
	else if (!ft_strncmp(cmd, "pa\n", 3))
		ft_pa(a, b, 1);
	else if (!ft_strncmp(cmd, "pb\n", 3))
		ft_pb(a, b, 1);
	else if (!ft_strncmp(cmd, "ra\n", 3))
		ft_ra(a, 1);
	else if (!ft_strncmp(cmd, "rb\n", 3))
		ft_rb(b, 1);
	else if (!ft_strncmp(cmd, "rra\n", 4))
		ft_rra(a, 1);
	else if (!ft_strncmp(cmd, "rrb\n", 4))
		ft_rrb(b, 1);
	else if (!ft_strncmp(cmd, "rrr\n", 4))
		ft_rrr(a, b, 1);
	else if (!ft_strncmp(cmd, "rr\n", 3))
		ft_rr(a, b, 1);
	else if (!ft_strncmp(cmd, "ss\n", 3))
		ft_ss(a, b, 1);
	else
		return (0);
	return (1);
}

void	ft_checker(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!do_cmd(a, b, line))
		{
			stack_free(a);
			stack_free(b);
			free(line);
			ft_error();
		}
		free(line);
		line = get_next_line(0);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!ft_checksorted(*a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(line);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = arg_in_stack_a(ac, av);
	if (!a || double_check(a))
	{
		stack_free(&a);
		ft_error();
	}
	b = 0;
	ft_checker(&a, &b);
	stack_free(&a);
	stack_free(&b);
	return (0);
}
