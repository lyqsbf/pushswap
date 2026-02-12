/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:23:24 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 14:23:31 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	lstswap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first -> next;
	first -> next = second -> next;
	second -> next = first;
	*stack = second;
}

void	sa(t_stack **a)
{
	lstswap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	lstswap(b);
	write(1, "sb\n", 3);
}
