/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:02:55 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/13 18:23:23 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
		i++;
	}
	(*stack)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}

/* tail of stack_a becomes top of stack_a */
void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

/* tail of stack_b becomes top of stack_b */
void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

/* do rra and rrb at the same time */
void	rrr(t_node **stack_a, t_node **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
