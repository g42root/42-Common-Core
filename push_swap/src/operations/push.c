/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:07:51 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/05 20:12:00 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/* pop the top element of stack_b and put it at the top of stack_a */
void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_a)->next = tmp;
	write(1, "pa\n", 3);
}

/* pop the top element of stack_a and put it at the top of stack_b */
void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_b;
	*stack_b = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_b)->next = tmp;
	write(1, "pb\n", 3);
}
