/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 05:43:55 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/23 03:13:53 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			BUFFER_SIZE = 100000000;

int			get_next_line(int fd, char **line)
{
	long int	i;
	long int	nlp;
	static char	*left[6144];
	char		*tmp;

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 0 || !line || read(fd, NULL, 0) < 0 ||
			/* !(*line = malloc(sizeof(char) * BUFFER_SIZE + 1)) || */
			!(tmp = malloc(sizeof(char) * BUFFER_SIZE + 1)))
		return (-1);
	if (!left[fd])
	{
		i = read(fd, left[fd], BUFFER_SIZE);
		printf("i is %li\n", i);
		if ((nlp = ft_strindof(left[fd], '\n')) != -1)
		{
			*line = ft_substr(left[fd], 0, nlp);
			if (!*line)
			{
				free(tmp);
				return (-1);
			}
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
			{
				free(tmp);
				return (-1);
			}
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
