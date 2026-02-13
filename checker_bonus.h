/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:42:40 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/13 22:49:38 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "header.h"
# include "gnl_bonus.h"

int		ft_strcmp(char *str1, char *str2);
void	sa_checker(t_stack **a);
void	ra_checker(t_stack **a);
void	rra_checker(t_stack **a);
void	sb_checker(t_stack **b);
void	rb_checker(t_stack **b);
void	rrb_checker(t_stack **b);
void	pa_checker(t_stack **a, t_stack **b);
void	pb_checker(t_stack **a, t_stack **b);
void	ss_checker(t_stack **a, t_stack **b);
void	rr_checker(t_stack **a, t_stack **b);
void	rrr_checker(t_stack **a, t_stack **b);
void	checker_swap(t_stack **a, t_stack **b, char *str);
void	checker_push(t_stack **a, t_stack **b, char *str);
void	checker_rotate(t_stack **a, t_stack **b, char *str);
void	checker_rrotate(t_stack **a, t_stack **b, char *str);

#endif
