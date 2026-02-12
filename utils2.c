/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:32:19 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 00:42:51 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	get_index(int *vector, int value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (vector[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

int	*ft_create_index(char **input, int size, int i)
{
	int	*index;
	int	ini;

	ini = i;
	index = (int *)malloc((size - ini) * sizeof(int));
	i = 0;
	while (i < size - ini)
	{
		index[i] = (int)ft_atol(input[ini + i]);
		i++;
	}
	quick_sort_array(index, 0, (size - ini) - 1);
	return (index);
}

int	ft_sqrt(int n)
{
	int	i;

	if (n <= 0)
		return (0);
	i = 1;
	while (i <= 46000 && (i * i) <= n)
		i++;
	return (i - 1);
}
