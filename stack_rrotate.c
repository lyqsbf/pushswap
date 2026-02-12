/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:22:53 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 14:28:05 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	rrotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*new_last;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	last = *stack;
	new_last = NULL;
	while (last->next)
	{
		new_last = last;
		last = last->next;
	}
	new_last->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

void	rra(t_stack **a)
{
	if (rrotate(a))
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (rrotate(b))
		write(1, "rrb\n", 4);
}
