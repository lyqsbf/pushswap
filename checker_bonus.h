/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:42:40 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 16:05:30 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "header.h"
# include "gnl_bonus.h"

typedef struct s_stack
{
	struct s_stack	*next;
	int				value;
	int				r_pos;
}	t_stack;

int		ft_strcmp(char *str1, char *str2);
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
