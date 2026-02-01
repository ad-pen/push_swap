/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahouk <ad396.pen@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:12:27 by adahouk           #+#    #+#             */
/*   Updated: 2026/02/01 17:24:04 by adahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}				t_stack;

t_stack	*ps_lstnew(int value);
t_stack	*ps_lstlast(t_stack *head);
void	ps_lstadd_front(t_stack **stack, t_stack *new);
void	ps_lstadd_back(t_stack **stack, t_stack *new);
void	print_list(t_stack *head);
int		ps_lstsize(t_stack *head);

void	ft_error(char *msg);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_stack **stack);
int		get_distance(t_stack **stack, int index);
void	make_top(t_stack **stack, int distance);
void	free_stack(t_stack **stack);
void	ft_free(char **str);

void	radix_sort(t_stack **stack_a, t_stack **stack_b);
void	simple_sort(t_stack **stack_a, t_stack **stack_b);
void	index_stack(t_stack **stack);
void	sort_5(t_stack **stack_a, t_stack **stack_b);

int		swap(t_stack **stack);
int		push(t_stack **stack_to, t_stack **stack_from);
int		rotate(t_stack **stack);
int		reverse_rotate(t_stack **stack);

int		sa(t_stack **stack_a);
int		sb(t_stack **stack_b);
int		ss(t_stack **stack_a, t_stack **stack_b);
int		pa(t_stack **stack_a, t_stack **stack_b);
int		pb(t_stack **stack_b, t_stack **stack_a);
int		ra(t_stack **stack_a);
int		rb(t_stack **stack_b);
int		rr(t_stack **stack_a, t_stack **stack_b);
int		rra(t_stack **stack_a);
int		rrb(t_stack **stack_b);
int		rrr(t_stack **stack_a, t_stack **stack_b);
void	func(t_stack *head, int min, int next_min, t_stack **stack_a);

#endif
