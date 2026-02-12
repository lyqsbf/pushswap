/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:57:37 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 14:26:57 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	rotate(t_stack **s)
{
	t_stack	*first;
	t_stack	*last;

	if (!s || !(*s) || !(*s)->next)
		return (0);
	first = *s;
	last = lstlast(*s);
	*s = first->next;
	last->next = first;
	first->next = NULL;
	return (1);
}

void	ra(t_stack **a)
{
	if (rotate(a))
		write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (rotate(b))
		write(1, "rb\n", 3);
}
