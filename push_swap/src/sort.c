/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:18:35 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:24:33 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_3(t_node **stack_a)
{
	if (get_max_pos(stack_a) == 1 && get_min_pos(stack_a) == 0)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (get_max_pos(stack_a) == 0 && get_min_pos(stack_a) == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (get_min_pos(stack_a) == 1 && get_max_pos(stack_a) == 2)
		sa(stack_a);
	else if (get_max_pos(stack_a) == 1 && get_min_pos(stack_a) == 2)
		rra(stack_a);
	else if (get_min_pos(stack_a) == 1 && get_max_pos(stack_a) == 0)
		ra(stack_a);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	while (stack_length(stack_a) > 3)
	{
		if (get_min_pos(stack_a) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_all(t_node **stack_a, t_node **stack_b)
{
	int	mean;

	while (stack_length(stack_a) > 5)
	{
		mean = get_median_value(stack_a);
		if ((*stack_a)->value < mean)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
	sort_5(stack_a, stack_b);
	push_swap(stack_a, stack_b);
}

/* algorithm using best friends */
void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	n;
	int	bf;

	while (*stack_b)
	{
		n = get_cheapest(*stack_a, *stack_b);
		bf = get_bf(*stack_a, n);
		climb_stack_b(stack_b, n);
		climb_stack_a(stack_a, bf);
		pa(stack_a, stack_b);
	}
	if (get_min_pos(stack_a) > (stack_length(stack_a) / 2))
	{
		while ((*stack_a)->value != get_min_value(*stack_a))
			rra(stack_a);
	}
	else
		while ((*stack_a)->value != get_min_value(*stack_a))
			ra(stack_a);
}
