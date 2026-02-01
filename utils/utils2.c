/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahouk <ad396.pen@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:13:47 by adahouk           #+#    #+#             */
/*   Updated: 2026/02/01 19:40:46 by adahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(1);
}

t_stack	*ps_lstnew(int value)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	func(t_stack *head, int min, int next_min, t_stack **stack_a)
{
	if (head->index == min && head->next->index != next_min)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if (head->next->index == min)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}
