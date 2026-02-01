/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahouk <ad396.pen@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:13:00 by adahouk           #+#    #+#             */
/*   Updated: 2026/02/01 17:16:20 by adahouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_lstadd_front(t_stack **stack, t_stack *new)
{
	new->next = *stack;
	*stack = new;
}

t_stack	*ps_lstlast(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ps_lstadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*n;

	if (*stack)
	{
		n = ps_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	ps_lstsize(t_stack *head)
{
	size_t	i;
	t_stack	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	print_list(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}
