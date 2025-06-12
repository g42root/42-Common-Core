/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:58:10 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/15 19:35:27 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*tail;
	t_node	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tail = *stack;
	tmp = tail->next;
	while (tail->next)
		tail = tail->next;
	tail->next = *stack;
	*stack = tmp;
	tail->next->next = NULL;
}

/* top of stack_a becomes tail of stack_a */
void	ra(t_node **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

/* top of stack_b becomes tail of stack_b */
void	rb(t_node **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

/* do ra and rb at the same time */
void	rr(t_node **stack_a, t_node **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
