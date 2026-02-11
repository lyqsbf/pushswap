/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 12:32:34 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 19:25:23 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	two_args(t_stack *stack_a, t_stack *stack_b, char *arg)
{
	char	**input;
	int		word_num;

	input = ft_split(arg);
	if (!input)
		return ;
	word_num = count_words(arg);
	if (ft_all_num(word_num, input, 0)
		&& ft_unique(word_num, input, 0))
	{
		ft_create_stack(input, word_num, &stack_a);
		solve(&stack_a, &stack_b);
		ft_clean_all(&stack_a, &stack_b);
	}
	free_split(input);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	stack_b = NULL;
	stack_a = NULL;
	if (argc == 2)
		two_args(stack_a, stack_b, argv[1]);
	else if (ft_all_num(argc, argv, 1) && ft_unique(argc, argv, 1))
	{
		ft_create_stack(++argv, argc - 1, &stack_a);
		solve(&stack_a, &stack_b);
		ft_clean_all(&stack_a, &stack_b);
	}
}
