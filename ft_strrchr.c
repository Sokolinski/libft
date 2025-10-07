/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 08:20:27 by marvin            #+#    #+#             */
/*   Updated: 2025/10/05 16:40:52 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t			i;
	unsigned char	c;
	char			*result;
	char			*position;

	result = (char *)str;
	c = (unsigned char) ch;
	i = 0;
	position = NULL;
	while (result[i])
	{
		if (result[i] == c)
			position = result + i;
		i++;
	}
	if (ch == '\0')
		return (result + i);
	return (position);
}
