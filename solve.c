/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:09:11 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 23:10:45 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sort_a(t_stack **a, t_stack **b, int n)
{
	int	chunk_size;
	int	i;

	chunk_size = 2 * ft_sqrt(n);
	i = 0;
	while (*a)
	{
		if ((*a)->r_pos <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->r_pos <= i + chunk_size)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	restore_stack_a(a, b);
}

void	restore_stack_a(t_stack **a, t_stack **b)
{
	int	pos;
	int	size_b;
	int	max_value;

	while (*b)
	{
		size_b = stack_size(*b);
		max_value = size_b - 1;
		pos = get_position(*b, max_value);
		if (pos <= size_b / 2)
		{
			while ((*b)->r_pos != max_value)
				rb(b);
		}
		else
		{
			while ((*b)->value != max_value)
				rrb(b);
		}
		pa(a, b);
	}
}

void	solve(t_stack **stack_a, t_stack **stack_b)
{
	int		size;

	size = stack_size(*stack_a);
	if (size > 1)
	{
		if (size == 2)
			sort_two_elem(stack_a);
		else if (size == 3)
			sort_three_elem(stack_a);
		else if (size == 4)
			sort_four_elem(stack_a, stack_b);
		else if (size == 5)
			sort_five_elem(stack_a, stack_b);
		else
			sort_a(stack_a, stack_b, size);
	}
}
