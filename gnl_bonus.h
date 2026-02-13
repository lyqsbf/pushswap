/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_bonus.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 20:46:18 by yaqliu            #+#    #+#             */
/*   Updated: 2026/02/13 22:33:08 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_BONUS_H
# define GNL_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "header.h"

char	*get_next_line(int fd);
char	*ft_read_content(int fd, char *buffer, char *content);
char	*ft_get_line(char *content);
char	*ft_strdup(char *str, size_t start, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strchr(char const *str, char const c);

#endif
