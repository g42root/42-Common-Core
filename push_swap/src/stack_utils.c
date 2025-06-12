/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:16:10 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/24 18:36:35 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* insert number into stack */
t_node	*insert_node(int n)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = n;
	new_node->next = NULL;
	return (new_node);
}

/* returns the stack tail */
t_node	*find_tail(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

/* insert node at stack tail */
void	insert_at_tail(t_node **stack, t_node *new_node)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_node;
	else
		(find_tail(*stack))->next = new_node;
}

/* returns the length of the stack */
int	stack_length(t_node **stack)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	if (*stack == NULL)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
