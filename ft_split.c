/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:45:09 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/09 18:49:24 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	arr_size(char *str, char sep)
{
	size_t	i;
	size_t	size;
	size_t	is_bigin;

	is_bigin = 1;
	size = 0;
	while (str[i])
	{
		if (str[i] != sep && is_bigin == 1)
			size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	str = ft_strtrim(s, c);
	size = arr_size(str, c);
	result = malloc(sizeof(char) * size);
	while (str[i])
	{
	}
}
