/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:13:26 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:13:30 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* returns the smallest bigger value in stack_a relative to the value given */
int	get_bf(t_node *stack, int n)
{
	t_node	*tmp;
	int		bf;

	tmp = stack;
	bf = INT_MAX;
	while (tmp)
	{
		if (tmp->value > n && bf > tmp->value)
			bf = tmp->value;
		tmp = tmp->next;
	}
	return (bf);
}

/* returns the amount of moves needed for a value to get to the top */
int	get_moves(t_node *stack, int n, int len)
{
	int	moves;
	int	mid;

	moves = 0;
	mid = len / 2;
	while (stack->value != n)
	{
		moves++;
		stack = stack->next;
	}
	if (moves > mid)
		return (len - moves);
	return (moves);
}

/* returns the total cost of the given pair of values */
int	get_cost(t_node *stack_a, t_node *stack_b, int n, int bf)
{
	int	total_cost;
	int	cost_a;
	int	cost_b;

	total_cost = 0;
	cost_a = get_moves(stack_a, bf, stack_length(&stack_a));
	cost_b = get_moves(stack_b, n, stack_length(&stack_b));
	total_cost = cost_a + cost_b;
	return (total_cost);
}

/* returns the lowest possible cost */
int	get_cheapest(t_node *stack_a, t_node *stack_b)
{
	t_node	*tmp;
	int		n;
	int		bf;
	int		cost;
	int		cheapest;

	tmp = stack_b;
	n = stack_b->value;
	cheapest = INT_MAX;
	while (tmp)
	{
		bf = get_bf(stack_a, tmp->value);
		cost = get_cost(stack_a, stack_b, tmp->value, bf);
		if (cost < cheapest)
		{
			n = tmp->value;
			cheapest = cost;
		}
		tmp = tmp->next;
	}
	return (n);
}
