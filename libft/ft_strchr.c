/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:06:50 by gude-cas          #+#    #+#             */
/*   Updated: 2023/05/09 16:38:07 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	c1;

	c1 = c;
	while (*str != '\0')
	{
		if (*str == c1)
			return ((char *)str);
		str++;
	}
	if (!c1)
		return ((char *)str);
	return (0);
}
