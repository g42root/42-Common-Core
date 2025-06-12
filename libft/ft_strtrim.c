/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:31:03 by gude-cas          #+#    #+#             */
/*   Updated: 2023/04/24 16:53:39 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char *a, const char *b, size_t n)
{
	size_t	i;

	i = 0;
	while (b[i] != '\0' && i < n)
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	str_no_set;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	str_no_set = j - i;
	str = malloc(str_no_set + 1);
	if (!str)
		return (0);
	copy(str, s1 + i, str_no_set);
	str[str_no_set] = '\0';
	return (str);
}
