/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:45:16 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/13 22:52:11 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ordered(t_stack **a, t_stack **b)
{
	int		ant;
	t_stack	*tmp;

	if (stack_size(*b) > 0)
		return (0);
	ant = (*a)->r_pos;
	tmp = (*a)->next;
	while (tmp)
	{
		if (tmp->r_pos < ant)
			return (0);
		ant = tmp->r_pos;
		tmp = tmp->next;
	}
	return (1);
}

void	ft_act(t_stack **a, t_stack **b, char *str, int *n)
{
	if (ft_strcmp(str, "sa\n") == 0 || ft_strcmp(str, "sb\n") == 0)
		return (checker_swap(a, b, str));
	else if (ft_strcmp(str, "pa\n") == 0 || ft_strcmp(str, "pb\n") == 0)
		return (checker_push(a, b, str));
	else if (ft_strcmp(str, "ra\n") == 0 || ft_strcmp(str, "rb\n") == 0)
		return (checker_rotate(a, b, str));
	else if (ft_strcmp(str, "rra\n") == 0 || ft_strcmp(str, "rrb\n") == 0)
		return (checker_rrotate(a, b, str));
	else if (ft_strcmp(str, "ss\n") == 0)
		return (ss_checker(a, b));
	else if (ft_strcmp(str, "rr\n") == 0)
		return (rr_checker(a, b));
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (rrr_checker(a, b));
	else
	{
		write(2, "Error\n", 6);
		*n = 0;
		return ;
	}
}

void	check(t_stack **a, t_stack **b)
{
	char	*movement;
	int		all_mov;

	all_mov = 1;
	movement = get_next_line(0);
	while (movement)
	{
		ft_act(a, b, movement, &all_mov);
		if (all_mov)
		{
			free(movement);
			movement = get_next_line(0);
		}
		else
			movement = NULL;
	}
	if (all_mov)
	{
		if (ordered(a, b))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
}

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
		check(stack_a, stack_b);
		ft_clean_all(stack_a, stack_b);
		free(index);
		free(input);
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
		check(&stack_a, &stack_b);
		ft_clean_all(&stack_a, &stack_b);
		free(index);
	}
	else
		ft_error(NULL, NULL);
}
