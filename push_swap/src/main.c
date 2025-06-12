/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:46:54 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:46:54 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* free allocated memory for each string in a 2D array */

void	free_args(char **nbrs)
{
	int	i;

	i = 0;
	if (nbrs)
	{
		while (nbrs[i])
			free(nbrs[i++]);
		free(nbrs);
	}
}

/* free allocated memory for each node in the stack */
void	free_stack(t_node **stack)
{
	t_node	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		(*stack) = tmp;
	}
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac > 1)
	{
		stack_a = NULL;
		stack_b = NULL;
		check_args(av, &stack_a);
		if (check_sort(&stack_a))
		{
			free_stack(&stack_a);
			return (1);
		}
		if (stack_length(&stack_a) <= 3)
			sort_3(&stack_a);
		else if (stack_length(&stack_a) <= 5)
			sort_5(&stack_a, &stack_b);
		else
			sort_all(&stack_a, &stack_b);
		free_stack(&stack_a);
	}
	else
		return (1);
}
