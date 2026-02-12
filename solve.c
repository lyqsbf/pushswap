/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:09:11 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 01:25:36 by yaqliu           ###   ########.fr       */
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
}

void	restore_stack_a(t_stack **a, t_stack **b)
{
	int	pos;
	int	size_b;
	int	max_value;

	while (*b)
	{
		size_b = stack_size(*b);
		max_value = get_max_rank(*b);
		pos = get_position(*b, max_value);
		if (pos <= size_b / 2)
		{
			while ((*b)->r_pos != max_value)
				rb(b);
		}
		else
		{
			while ((*b)->r_pos != max_value)
				rrb(b);
		}
		pa(a, b);
	}
}

void	small_cases(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (size == 2)
		sort_two_elem(stack_a);
	else if (size == 3)
		sort_three_elem(stack_a);
	else if (size == 4)
		sort_four_elem(stack_a, stack_b);
	else
		sort_five_elem(stack_a, stack_b);
}

void	solve(t_stack **stack_a, t_stack **stack_b)
{
	int		size;

	size = stack_size(*stack_a);
	if (size > 1 && size <= 5)
		small_cases(stack_a, stack_b, size);
	else if (size > 5)
	{
		sort_a(stack_a, stack_b, size);
		restore_stack_a(stack_a, stack_b);
	}
}
