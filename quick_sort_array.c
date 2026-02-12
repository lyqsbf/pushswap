/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:16:36 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 00:15:20 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	partition(int *arr, int ini, int fi)
{
	int	pivot;
	int	i;
	int	j;

	pivot = arr[fi];
	i = (ini - 1);
	j = ini;
	while (j < fi)
	{
		if (arr[j] < pivot)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[fi]);
	return (i + 1);
}

void	quick_sort_array(int *arr, int ini, int fi)
{
	int	n;

	if (ini < fi)
	{
		n = partition(arr, ini, fi);
		quick_sort_array(arr, ini, n - 1);
		quick_sort_array(arr, n + 1, fi);
	}
}
