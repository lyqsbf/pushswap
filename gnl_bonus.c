/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 20:52:36 by yaqliu            #+#    #+#             */
/*   Updated: 2025/12/07 18:21:42 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_bonus.h"

char	*ft_read_content(int fd, char *buffer, char *res)
{
	char	*tmp;
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0 && (int)ft_strchr(res, '\n') == -1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(res), res = NULL, NULL);
		buffer[bytes_read] = '\0';
		tmp = res;
		res = ft_strjoin(res, buffer);
		free(tmp);
		if (!res)
			return (NULL);
	}
	return (res);
}

char	*ft_get_line(char *content)
{
	char	*rcontent;
	size_t	i;

	i = ft_strchr(content, '\n');
	if ((int)i != -1)
	{
		rcontent = ft_strdup(content, i + 1, ft_strlen(content) - i - 1);
		free(content);
		content = rcontent;
		return (content);
	}
	else
		return (free(content), content = NULL, NULL);
}

char	*get_next_line(int fd)
{
	static char	*content;
	char		*buffer;
	char		*line;
	size_t		size;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(content), content = NULL, NULL);
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	content = ft_read_content(fd, buffer, content);
	free(buffer);
	buffer = NULL;
	if (!content || *content == '\0')
		return (free(content), content = NULL, NULL);
	size = ft_strchr(content, '\n');
	if ((int)size == -1)
		size = ft_strlen(content);
	line = ft_strdup(content, 0, size + 1);
	if (!line)
		return (NULL);
	content = ft_get_line(content);
	return (line);
}
