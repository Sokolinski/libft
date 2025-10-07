/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:31:49 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 16:44:04 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t			i;
	unsigned char	c;
	char			*result;

	result = (char *)str;
	c = (unsigned char) ch;
	i = 0;
	while (result[i])
	{
		if (result[i] == c)
			return (result + i);
		i++;
	}
	if (ch == '\0')
		return (result + i);
	return (NULL);
}
