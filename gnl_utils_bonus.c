/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:49:12 by yaqliu            #+#    #+#             */
/*   Updated: 2025/12/07 15:53:11 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_bonus.h"

size_t	ft_strchr(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	a;
	size_t	b;
	size_t	i;

	if (!s2)
		return (NULL);
	a = ft_strlen((char *)s1);
	b = ft_strlen((char *)s2);
	res = (char *)malloc((a + b + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < a)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < b + a)
	{
		res[i] = s2[i - a];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strdup(char *s, size_t start, size_t size)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = s[start + i];
		i++;
	}
	dup[size] = '\0';
	return (dup);
}
