/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:40:24 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 18:57:20 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	if (!f || !s)
		return (NULL);
	len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s, len + 1);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
