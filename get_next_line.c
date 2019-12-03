/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 05:43:55 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/30 21:55:56 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

//int			BUFFER_SIZE = 10000000;

int			get_next_line(int fd, char **line)
{
	long int	i;
	long int	nlp;
	static char	*left[6144];

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (!left[fd])
	{
		left[fd] = malloc(sizeof(char) * BUFFER_SIZE + 1);
		i = read(fd, left[fd], BUFFER_SIZE);
		if ((nlp = ft_strindof(left[fd], '\n')) != -1)
		{
			*line = ft_substr(left[fd], 0, nlp);
			if (!*line)
				return (-1);
			left[fd] = ft_strchr(left[fd], '\n');
			left[fd]++;
			return (1);
		}
		else
		{
			*line = left[fd];
			left[fd] = NULL;
			return (0);
		}
	}
	else
	{
		if ((nlp = ft_strindof(left[fd], '\n')) != -1)
		{
			*line = ft_substr(left[fd], 0, nlp);
			if (!*line)
				return (-1);
			left[fd] = ft_strchr(left[fd], '\n');
			left[fd]++;
			return (1);
		}
		else
		{
			*line = left[fd];
			left[fd] = NULL;
			return (0);
		}
	}
}
