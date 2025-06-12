/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:05:09 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/22 16:00:38 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* return the length of an array of chars */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* convert an array of chars to a long variable */
long	ascii_to_long(char *str)
{
	int			i;
	int			flag;
	long int	n;

	i = 0;
	flag = 1;
	n = 0;
	while (str[i] == ' ' || (str[i] >= '\r' && str[i] <= '\t'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		flag = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + (n * 10);
		i++;
	}
	return (n * flag);
}
