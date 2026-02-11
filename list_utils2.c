/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:09:03 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 18:44:56 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack)
	{
		i = 1;
		while (stack->next)
		{
			stack = stack->next;
			i++;
		}
	}
	return (i);
}

int	get_pivot(t_stack *stack, int range)
{
	int		*v;
	int		pivot;
	int		i;

	v = (int *)malloc(range * sizeof(int));
	if (!v)
		return (-1);
	i = 0;
	while (i < range && stack)
	{
		v[i++] = stack -> value;
		stack = stack -> next;
	}
	quick_sort_array(v, 0, i - 1);
	pivot = v[i / 2];
	free(v);
	return (pivot);
}
