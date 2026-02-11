/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:07:13 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 22:12:42 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_create_stack(char **content, int size, t_stack **stack, int *index)
{
	t_stack	*elem;
	int		i;
	int		pos;
	long	val;

	*stack = NULL;
	i = 0;
	while (i < size)
	{
		val = ft_atol(content[i]);
		pos = get_index(index, val, size);
		elem = lstnew((int)val, pos);
		lstadd_back(stack, elem);
		i++;
	}
}

t_stack	*lstnew(int content, int pos)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> value = content;
	new -> r_pos = pos;
	new -> next = NULL;
	return (new);
}

void	lstadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!stack || !new)
	{
		*stack = new;
		return ;
	}
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	last = *stack;
	while (last -> next)
		last = last -> next;
	last -> next = new;
}

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
