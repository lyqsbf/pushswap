/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:09:03 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 01:07:41 by yaqliu           ###   ########.fr       */
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

int	get_max_rank(t_stack *s)
{
	int		max;
	t_stack	*tmp;

	max = -1;
	tmp = s;
	while (tmp)
	{
		if (tmp->r_pos > max)
			max = tmp->r_pos;
		tmp = tmp->next;
	}
	return (max);
}
