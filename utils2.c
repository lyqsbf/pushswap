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

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_error(t_stack **a, t_stack **b)
{
	if (a)
		ft_clear(a);
	if (b)
		ft_clear(b);
	write(2, "Error\n", 6);
	exit(1);
}
