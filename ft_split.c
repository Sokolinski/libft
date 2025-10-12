/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:45:09 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/12 22:03:35 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	arr_size(char const *str, char sep)
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

size_t	str_len(char const *str, char sep)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != sep)
		i++;
	return (i);
}

char	**arr_fill(char **result, size_t size, char const *str, char sep)
{
	size_t	cp_len;
	size_t	cp_pos;
	size_t	i;
	size_t	is_bigin;

	i = 0;
	cp_pos = 0;
	while (i < size)
	{
		while ((str[cp_pos] == sep && is_bigin != 0) && str[cp_pos])
		{
			cp_pos++;
			if (str[cp_pos] != sep)
				is_bigin = 0;
		}
		is_bigin = 1;
		cp_len = str_len(str + cp_pos, sep);
		result[i] = malloc(sizeof(char) * (cp_len + 1));
		if (result[i] == NULL)
			return (NULL);
		ft_strlcpy(result[i], str + cp_pos, cp_len + 1);
		cp_pos += cp_len;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	size;
	char	*str;

	str = ft_strtrim(s, &c);
	size = arr_size(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (result == NULL)
		return (NULL);
	arr_fill(result, size, str, c);
	result[size] = NULL;
	return (result);
}
