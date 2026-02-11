/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:07:27 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/02 19:51:23 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isnum(char *str)
{
	size_t	i;

	i = 0;
	if (str[0] == '-')
		i = 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == ft_strlen(str))
		return (1);
	return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

long	ft_atol(char *num)
{
	long	number;
	int		i;
	int		sign;

	number = 0;
	i = 0;
	sign = 1;
	if (num[0] == '-')
	{
		i = 1;
		sign = -1;
	}
	while (num[i])
	{
		number = number * 10 + (num[i] - '0');
		i++;
	}
	return (sign * number);
}

char	*ft_substr(char *str, int ini, int size)
{
	char	*substr;
	int		i;

	substr = (char *)malloc((size + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		substr[i] = str[ini + i];
		i++;
	}
	substr[size] = '\0';
	return (substr);
}
