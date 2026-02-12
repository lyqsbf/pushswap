/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movments2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:22:53 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 16:57:06 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rra_checker(t_stack **a)
{
	rrotate(a);
}

void	rrb_checker(t_stack **b)
{
	rrotate(b);
}

void	sa_checker(t_stack **a)
{
	lstswap(a);
}

void	sb_checker(t_stack **b)
{
	lstswap(b);
}