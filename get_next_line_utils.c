/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-haj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:42:37 by abel-haj          #+#    #+#             */
/*   Updated: 2019/11/21 18:42:40 by abel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int		ft_strindof(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char *)(s + i);
		i++;
	}
	if (c == 0)
		return (char *)(s + i);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;
	size_t	s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	string = (char *)malloc(len + 1);
	if (string == NULL)
		return (NULL);
	while (len > i && s_len > start)
	{
		string[i] = s[i + start];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str_cpy;

	i = 0;
	str_cpy = (char *)malloc(ft_strlen(s1) + 1);
	if (str_cpy == NULL)
		return (NULL);
	while (s1[i])
	{
		str_cpy[i] = s1[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
