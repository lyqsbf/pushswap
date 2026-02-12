/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movments1_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:43:37 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 16:54:35 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pa_checker(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	pb_checker(t_stack **a, t_stack **b)
{
	push(b, a);
}

void	ra_checker(t_stack **a)
{
	rotate(a);
}

void	rb_checker(t_stack **b)
{
	rotate(b);
}
