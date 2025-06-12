/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:53:56 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/13 16:25:41 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_node **stack)
{
	t_node	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

/* swap 2 top elements of stack_a */
void	sa(t_node **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

/* swap 2 top elements of stack_b */
void	sb(t_node **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

/* do sa and sb at the same time */
void	ss(t_node **stack_a, t_node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
