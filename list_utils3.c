/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:47:35 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 23:12:50 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	get_min(t_stack *a)
{
	int	min;

	min = a->value;
	while (a)
	{
		if (a->value < min)
			min = a->value;
		a = a->next;
	}
	return (min);
}

t_stack	*lstlast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack -> next)
		stack = stack -> next;
	return (stack);
}

void	ft_clear(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	ft_clean_all(t_stack **a, t_stack **b)
{
	ft_clear(a);
	ft_clear(b);
}

int	get_position(t_stack *s, int val)
{
	int	i;

	i = 0;
	while (*s)
	{
		if ((*s)->r_pos == val)
			return (i);
		(*s) = (*s)->next;
		i++;
	}
	return (-1);
}
