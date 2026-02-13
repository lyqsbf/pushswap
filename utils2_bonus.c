/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 22:35:08 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/13 22:46:59 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	checker_swap(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		return (sa_checker(a));
	return (sb_checker(b));
}

void	checker_push(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "pa\n") == 0)
		return (pa_checker(a, b));
	return (pb_checker(a, b));
}

void	checker_rotate(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "ra\n") == 0)
		return (ra_checker(a));
	return (rb_checker(b));
}

void	checker_rrotate(t_stack **a, t_stack **b, char *str)
{
	if (ft_strcmp(str, "rra\n") == 0)
		return (rra_checker(a));
	return (rrb_checker(b));
}
