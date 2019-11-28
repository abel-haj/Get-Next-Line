/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:42:20 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/21 18:42:28 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     GET_NEXT_LINE_H
# define     GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_strindof(const char *s, int c);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
int		get_next_line(int fd, char **line);

#endif