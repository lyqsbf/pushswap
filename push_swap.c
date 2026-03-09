/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 12:32:34 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/14 13:59:56 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	two_args(t_stack **stack_a, t_stack **stack_b, char *arg)
{
	char	**input;
	int		*index;
	int		word_num;

	word_num = count_words(arg);
	if (word_num == 0)
		ft_error(NULL, NULL);
	input = ft_split(arg);
	if (!input)
		ft_error(NULL, NULL);
	if (ft_all_num(word_num, input, 0)
		&& ft_unique(word_num, input, 0))
	{
		index = ft_create_index(input, word_num, 0);
		ft_create_stack(input, word_num, stack_a, index);
		solve(stack_a, stack_b);
		ft_clean_all(stack_a, stack_b);
		free(index);
		free_split(input);
		return ;
	}
	free_split(input);
	ft_error(NULL, NULL);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*index;

	if (argc < 2)
		return (1);
	stack_b = NULL;
	stack_a = NULL;
	index = NULL;
	if (argc == 2)
		two_args(&stack_a, &stack_b, argv[1]);
	else if (ft_all_num(argc, argv, 1) && ft_unique(argc, argv, 1))
	{
		index = ft_create_index(argv, argc, 1);
		ft_create_stack(++argv, argc - 1, &stack_a, index);
		solve(&stack_a, &stack_b);
		ft_clean_all(&stack_a, &stack_b);
		free(index);
	}
	else
		ft_error(NULL, NULL);
}
