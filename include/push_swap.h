/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoribe <joaoribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:21:57 by joaoribe          #+#    #+#             */
/*   Updated: 2023/12/10 22:06:42 by joaoribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			n;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

void	add_to_stack(t_stack **stack, int n);
t_stack	*split_and_stack(char *s);
void	check_lims(int n);
void	check_digits(char *s);
t_stack	*arg_in_stack_a(int ac, char **av);
int		cheapest_double_rotate(t_stack *a, t_stack *b, char c);
int		check_sort(t_stack *stck);
int		check_circle_sort(t_stack *stck);
int		check_circle_order_desc(t_stack *stck);
int		check_circle_order_asc(t_stack *stck);
int		double_check(t_stack *a);
void	error_print(void);
void	free_double(char **s);
int		get_index(t_stack *s, int n);
int		push_index(t_stack *s, int n);
int		ft_min(t_stack *s);
int		ft_max(t_stack *s);
void	order(t_stack **s);
void	do_rarb(t_stack **a, t_stack **b, int c, char d);
void	do_rrarb(t_stack **a, t_stack **b, int c, char d);
void	do_rarrb(t_stack **a, t_stack **b, int c, char d);
void	do_rrarrb(t_stack **a, t_stack **b, int c, char d);
int		rarbs(t_stack *a, t_stack *b, int c, char d);
int		rrarbs(t_stack *a, t_stack *b, int c, char d);
int		rarrbs(t_stack *a, t_stack *b, int c, char d);
int		rrarrbs(t_stack *a, t_stack *b, int c, char d);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	push_b_sort(t_stack **a, t_stack **b);
void	push_a_sort(t_stack **a, t_stack **b);
void	sort_three(t_stack **a);
void	sort(t_stack **a);
void	stack_free(t_stack **stck);
int		ft_tlstsize(t_stack *lst);
t_stack	*ft_tlstlast(t_stack *lst);

#endif