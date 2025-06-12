/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:10:56 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/27 16:29:05 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* return 1 if str has no duplicate numbers */
int	check_dup(char **av, long tmp, int i)
{
	i++;
	while (av[i])
	{
		if (ascii_to_long(av[i]) == tmp)
			return (0);
		i++;
	}
	return (1);
}

/* return 1 if str only contains digits */
int	check_num(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] == '-' && (str[1] >= '0' && str[1] <= '9'))
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* parse all input */
void	check_args(char **av, t_node **stack)
{
	int			i;
	int			j;
	long		tmp;
	char		**nbrs;

	i = 0;
	while (av[++i])
	{
		nbrs = ft_split(av[i], ' ');
		j = 0;
		while (nbrs[j])
		{
			tmp = ascii_to_long(nbrs[j]);
			if (!check_dup(nbrs, tmp, j) || !check_num(nbrs[j])
				|| (tmp < INT_MIN || tmp > INT_MAX)
				|| (ft_strlen(nbrs[j]) > 11) || !check_dup(av, tmp, i))
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			insert_at_tail(stack, insert_node(tmp));
			j++;
		}
		free_args(nbrs);
	}
}

/* return 1 if the stack is sorted */
int	check_sort(t_node **stack)
{
	int		prev;
	t_node	*tmp;

	if (!*stack || !(*stack)->next)
		return (1);
	prev = (*stack)->value;
	tmp = (*stack)->next;
	while (tmp)
	{
		if (tmp->value < prev)
			return (0);
		prev = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}
