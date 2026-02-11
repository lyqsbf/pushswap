/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:32:19 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 22:51:53 by yaqliu           ###   ########.fr       */
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

	index = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		index[i] = (int)ft_atol(input[i]);
		i++;
	}
	quick_sort_array(index, 0, size - 1);
	return (index);
}

int	ft_srqt(int n)
{
	int	i;

	i = 1;
	while (i * i <= n)
		i++;
	return (i);
}
