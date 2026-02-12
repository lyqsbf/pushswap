/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:09:36 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/12 00:51:48 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_valid(char *num)
{
	long	upper_limit;
	long	lower_limit;
	long	number;

	if (!ft_isnum(num) || ft_strlen(num) > 11)
		return (write(2, "ErrorVAL\n", 9), 0);
	number = ft_atol(num);
	upper_limit = 2147483647;
	lower_limit = -2147483648;
	if (number < lower_limit || number > upper_limit)
		return (write(2, "ErrorLIM\n", 9), 0);
	return (1);
}

int	is_repeated(char **argv, int pos, int argc)
{
	int		i;
	long	num1;
	long	num2;

	num1 = ft_atol(argv[pos]);
	i = pos + 1;
	while (i < argc)
	{
		num2 = ft_atol(argv[i]);
		if (num1 == num2)
			return (write(2, "ErrorREP\n", 9), 1);
		i++;
	}
	return (0);
}

int	ft_all_num(int argc, char **argv, int i)
{
	while (i < argc && is_valid(argv[i]))
		i++;
	return (i == argc);
}

int	ft_unique(int argc, char **argv, int i)
{
	while (i < argc && !is_repeated(argv, i, argc))
		i++;
	return (i == argc);
}
