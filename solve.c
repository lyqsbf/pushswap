/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:09:11 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 18:30:43 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	quick_sort_a(t_stack **a, t_stack **b, int n, int pushed)
{
	int	pivot_a;
	int	rotated;
	int	i;

	if (n <= 1)
		return ;
	pivot_a = get_pivot(*a, n);
	i = 0;
	rotated = 0;
	while (i++ < n)
	{
		if ((*a)->value < pivot_a)
		{
			pb(a, b);
			pushed++;
		}
		else
		{
			ra(a);
			rotated++;
		}
	}
	if (rotated != stack_size(*a))
		restore_stack_a(a, rotated);
	quick_sort_a(a, b, n - pushed, 0);
	quick_sort_b(a, b, pushed, 0);
}

void	quick_sort_b(t_stack **a, t_stack **b, int count, int pushed)
{
	int	pivot_b;
	int	rotated;
	int	i;

	if (count <= 1)
	{
		if (count == 1)
			pa(a, b);
		return ;
	}
	pivot_b = get_pivot(*b, count);
	i = 0;
	rotated = 0;
	while (i++ < count)
	{
		if ((*b)->value >= pivot_b && ++pushed)
			pa(a, b);
		else if (++rotated)
			rb(b);
	}
	quick_sort_a(a, b, pushed, 0);
	if (rotated != stack_size(*b))
		restore_stack_b(b, rotated);
	quick_sort_b(a, b, count - pushed, 0);
}

void	restore_stack_a(t_stack **a, int n)
{
	while (n--)
		rra(a);
}

void	restore_stack_b(t_stack **b, int n)
{
	while (n--)
		rrb(b);
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
			quick_sort_a(stack_a, stack_b, size, 0);
	}
}
