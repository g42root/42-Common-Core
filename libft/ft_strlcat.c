/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:02:33 by gude-cas          #+#    #+#             */
/*   Updated: 2023/04/18 19:16:32 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = 0;
	s = (char *)src;
	while (dest[i] != '\0' && i < n)
		i++;
	while (s[j] != '\0' && (i + j + 1) < n)
	{
		dest[i + j] = s[j];
		j++;
	}
	if (i < n)
		dest[i + j] = '\0';
	return (i + ft_strlen(s));
}
