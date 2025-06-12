/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:20:00 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/27 16:07:41 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* find the biggest value in the stack and return its position */
int	get_max_pos(t_node **stack)
{
	int		max;
	int		i;
	int		j;
	t_node	*current;

	max = INT_MIN;
	i = -1;
	j = 0;
	current = *stack;
	while (current)
	{
		if (current->value > max)
		{
			max = current->value;
			i = j;
		}
		current = current->next;
		j++;
	}
	return (i);
}

/* find the smallest value in the stack and return its position */
int	get_min_pos(t_node **stack)
{
	int		i;
	int		min;
	t_node	*tmp;
	t_node	*current;

	i = 0;
	min = (*stack)->value;
	tmp = *stack;
	current = *stack;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	while (tmp->value != min)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* find the smallest value in the stack and return it */
int	get_min_value(t_node *stack)
{
	t_node	*tmp;
	int		min;

	tmp = stack;
	min = tmp->value;
	while (tmp)
	{
		if (tmp->value < min)
			min = tmp->value;
		tmp = tmp->next;
	}
	return (min);
}

/* returns the median value */
int	get_median_value(t_node **stack)
{
	long	sum;
	int		count;
	t_node	*tmp;

	sum = 0;
	count = 0;
	tmp = (*stack);
	while (tmp)
	{
		sum += tmp->value;
		count++;
		tmp = tmp->next;
	}
	return (sum / count);
}
