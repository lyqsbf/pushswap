/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:42:11 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 19:08:55 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_two_elem(t_stack **stack)
{
	if (((*stack)->value) > ((*stack)->next-> value))
		sa(stack);
	return ;
}

void	sort_three_elem(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->value;
	b = (*stack)->next->value;
	c = (*stack)->next->next->value;
	if (a > b && a > c)
		ra(stack);
	else if (b > a && b > c)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_four_elem(t_stack **a, t_stack **b)
{
	int	min;

	min = get_min(*a);
	while ((*a)-> value != min)
	{
		if (lstlast(*a)->value == min)
			rra(a);
		else
			ra(a);
	}
	pb(a, b);
	sort_three_elem(a);
	pa(a, b);
}

void	sort_five_elem(t_stack **a, t_stack **b)
{
	int	min;

	min = get_min(*a);
	while ((*a)->value != min)
	{
		if (lstlast(*a)->value == min
			|| (*a)->next->next->next->value == min)
			rra(a);
		else
			ra(a);
	}
	pb(a, b);
	sort_four_elem(a, b);
	pa(a, b);
}
