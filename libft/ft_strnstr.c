/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:00:35 by gude-cas          #+#    #+#             */
/*   Updated: 2023/04/21 18:44:11 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *biggle, const char *little, size_t len)
{
	char	*big;
	char	*lit;
	size_t	i;
	size_t	j;

	big = (char *)biggle;
	lit = (char *)little;
	i = -1;
	if (*lit == '\0')
		return (big);
	while (big[++i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == lit[j] && i + j < len)
		{
			if (lit[j + 1] == '\0')
				return (big + i);
			j++;
		}
	}
	return (0);
}
