/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:45:43 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 18:57:03 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	start(char const *s1, char const *set)
{
	size_t	set_len;
	size_t	i;
	size_t	j;
	size_t	flag;

	flag = 0;
	set_len = ft_strlen(set);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[i] != set[j])
				flag++;
			j++;
		}
		if (flag == set_len)
			return (i);
		flag = 0;
		i++;
	}
	return (0);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	set_len;
	size_t	j;
	size_t	flag;
	size_t	s1_len;

	flag = 0;
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1) - 1;
	while (s1_len != 0)
	{
		j = 0;
		while (j < set_len)
		{
			if (s1[s1_len] != set[j])
				flag++;
			j++;
		}
		if (flag == set_len)
			return (s1_len);
		flag = 0;
		s1_len--;
	}
	return (s1_len);
}

static char	*set_null(char const *s1)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s1) + 1;
	result = malloc(size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, size);
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_p;
	size_t	end_p;
	size_t	size;
	char	*result;

	if (s1 == NULL)
		return (result = NULL);
	if (set == NULL)
	{
		result = set_null(s1);
		return (result);
	}
	start_p = start(s1, set);
	end_p = end(s1, set);
	if (end_p == start_p)
		size = 1;
	else
		size = end_p - start_p + 2;
	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + start_p, size);
	return (result);
}
