/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:09:54 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/13 20:32:36 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	arr_size(char const *str, char sep)
{
	size_t	i;
	size_t	size;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			size++;
			while (str[i] != sep && str[i])
				i++;
		}
		if (str[i] == sep)
		{
			while (str[i] == sep && str[i])
				i++;
		}
	}
	return (size);
}

static size_t	str_len(char const *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != sep)
		i++;
	return (i);
}
static char	**arr_fill(char **res, size_t size, char sep, char const *str)
{
	size_t	i;
	size_t	cp_pos;
	size_t	cp_len;

	cp_pos = 0;
	i = 0;
	while (i < size)
	{
		while (str[cp_pos] == sep && str[cp_pos])
			cp_pos++;
		cp_len = str_len(str + cp_pos, sep);
		res[i] = malloc(sizeof(char) * cp_len + 1);
		ft_strlcpy(res[i], str + cp_pos, cp_len + 1);
		cp_pos += cp_len;
		i++;
	}
	return (res);
}
char	**ft_split(char const *s, char c)
{
	char		**result;
	const char	*str;
	size_t		size;

	if (s == NULL)
		return (result = NULL);
	str = ft_strtrim(s, &c);
	size = arr_size(str, c) + 1;
	result = malloc(sizeof(char *) * (size));
	arr_fill(result, size, c, str);
	result[size - 1] = NULL;
	return (result);
}
