/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahouk <ad396.pen@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:26:54 by adahouk           #+#    #+#             */
/*   Updated: 2026/02/01 17:27:01 by adahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ps_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ps_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_stack **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_stack **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}
