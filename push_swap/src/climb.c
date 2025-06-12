/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   climb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:15:30 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:11:07 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* given value climbs stack_a */
void	climb_stack_a(t_node **stack, int n)
{
	int		index;
	t_node	*tmp;
	int		len;

	index = 0;
	tmp = *stack;
	while (tmp != NULL && tmp->value != n)
	{
		index++;
		tmp = tmp->next;
	}
	len = stack_length(stack);
	if (index > len / 2)
	{
		index = len - index;
		while (index-- > 0)
			rra(stack);
	}
	else
	{
		while (index-- > 0)
			ra(stack);
	}
}

/* given value climbs stack_b */
void	climb_stack_b(t_node **stack, int n)
{
	t_node	*tmp;
	int		index;
	int		len;

	index = 0;
	tmp = *stack;
	while (tmp != NULL && tmp->value != n)
	{
		index++;
		tmp = tmp->next;
	}
	len = stack_length(stack);
	if (index > len / 2)
	{
		index = len - index;
		while (index-- > 0)
			rrb(stack);
	}
	else
	{
		while (index-- > 0)
			rb(stack);
	}
}
