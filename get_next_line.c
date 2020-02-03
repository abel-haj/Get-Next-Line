/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingnl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 05:43:55 by abel-haj          #+#    #+#             */
/*   Updated: 2020/02/03 21:51:55 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

//int			BUFFER_SIZE = 10000000;

int			get_next_line(int fd, char **line)
{
	long int	i;
	long int	nlp;
	char		*tmp;
	static char	*left[6144];

	i = 0;
	if (fd < 0 || BUFFER_SIZE < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	// read until a new line
	// or the end of 

	left[fd] = malloc(sizeof(char) * BUFFER_SIZE + 1);
	tmp = malloc(sizeof(char) * BUFFER_SIZE + 1);

	if (!left[fd])
	{
		//	read
		//	if newline
		// 		return line
		//	if no newline
		//		read
		while ((i == read(fd, tmp, BUFFER_SIZE)) > 0)
		{
			// if new line
			if (ft_strindof(tmp, '\n') > -1)
			{
				// put in left if left
				
				// return line
			}
			else
			{
				// put in line
			}
		}
	}
	else
	{
		//	if newline
		//		return line
		//	if no newline
		//		read
		//			if newline
		//				return newline
		//			if no newline
		//				read
	}
}
