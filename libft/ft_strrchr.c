/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:34:58 by gude-cas          #+#    #+#             */
/*   Updated: 2023/04/18 19:16:49 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	const char		*b;
	char			*s;
	unsigned char	c1;

	c1 = c;
	s = (char *)str;
	i = ft_strlen(s);
	b = (s + i);
	while (i >= 0)
	{
		if (*b == c1)
			return ((char *)b);
		b--;
		i--;
	}
	if (c1 == '\0')
		return ((char *)b);
	return (0);
}
