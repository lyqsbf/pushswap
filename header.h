/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:22:37 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 01:07:14 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	struct s_stack	*next;
	int				value;
	int				r_pos;
}		t_stack;

// INPUT
int		is_valid(char *num);
int		is_repeated(char **argv, int pos, int argc);
int		ft_all_num(int argc, char **argv, int i);
int		ft_unique(int argc, char **argv, int i);

// UTILS
size_t	ft_strlen(char *str);
int		ft_isnum(char *str);
int		is_space(char c);
int		get_index(int *vector, int value, int size);
int		*ft_create_index(char **input, int size, int i);
int		ft_sqrt(int n);
long	ft_atol(char *num);
char	*ft_substr(char *str, int ini, int size);
void	ft_error(t_stack **a, t_stack **b);
void	free_split(char **str);

// SPLIT
int		count_words(char *str);
int		word_len(char *str, int ini);
char	**ft_split(char *str);
void	ft_clean_input(char **str, int size);
void	ft_fill_words(char **res, char *str, int n);

// LISTS
t_stack	*lstnew(int content, int index);
t_stack	*lstlast(t_stack *stack);
int		get_max_rank(t_stack *s);
int		get_min(t_stack *a);
int		get_position(t_stack *s, int value);
int		stack_size(t_stack *stack);
void	ft_create_stack(char **content, int size, t_stack **stack, int *index);
void	lstadd_back(t_stack **stack, t_stack *elem);
void	lstswap(t_stack **stack);
void	ft_clear(t_stack **stack);
void	ft_clean_all(t_stack **a, t_stack **b);

// MOVEMENTS
void	sa(t_stack **a);
void	ra(t_stack **a);
void	rra(t_stack **a);
void	sb(t_stack **b);
void	rb(t_stack **b);
void	rrb(t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	push(t_stack **dst, t_stack **src);
int		rotate(t_stack **s);
int		rrotate(t_stack **stack);

//quicksort array
int		partition(int *arr, int ini, int fi);
void	ft_swap(int *a, int *b);
void	quick_sort_array(int *arr, int ini, int fi);

//algorithm
void	sort_two_elem(t_stack **stack);
void	sort_three_elem(t_stack **stack);
void	sort_four_elem(t_stack **a, t_stack **b);
void	sort_five_elem(t_stack **a, t_stack **b);
void	sort_a(t_stack **a, t_stack **b, int chunk_size);
void	restore_stack_a(t_stack **a, t_stack **b);
void	small_cases(t_stack **a, t_stack **b, int size);
void	solve(t_stack **a, t_stack **b);

#endif