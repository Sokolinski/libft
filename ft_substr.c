/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:00:48 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/06 19:41:39 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	cp_len;
	char	*result;

	s_len = ft_strlen(s);
	if (s_len <= start || len == 0)
		return (NULL);
	if (s_len < start + len)
		cp_len = s_len;
	else
		cp_len = len;
	result = malloc(cp_len - start + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, cp_len +1);
	return (result);
}
