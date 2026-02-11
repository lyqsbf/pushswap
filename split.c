/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:39:56 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/11 11:28:48 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_words(char *str)
{
	int	i;
	int	in_word;
	int	count;

	count = 0;
	i = 0;
	in_word = 0;
	while (str[i])
	{
		if (!in_word && !is_space(str[i]))
		{
			in_word = 1;
			count++;
		}
		else if (in_word && is_space(str[i]))
			in_word = 0;
		i++;
	}
	return (count);
}

int	word_len(char *str, int ini)
{
	int	i;

	i = 0;
	while (str[ini + i] && !is_space(str[ini + i]))
		i++;
	return (i);
}

void	ft_clean_input(char **res, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

void	ft_fill_words(char **res, char *str, int n)
{
	int	i;
	int	len;

	i = 0;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i])
		{
			len = word_len(str, i);
			res[n] = ft_substr(str, i, len);
			if (!res[n])
				return (ft_clean_input(res, n));
			n++;
			i += len;
		}
	}
}

char	**ft_split(char *str)
{
	char	**res;
	int		num_words;

	num_words = count_words(str);
	res = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ft_fill_words(res, str, 0);
	res[num_words] = NULL;
	return (res);
}
