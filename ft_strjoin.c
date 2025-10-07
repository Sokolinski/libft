/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:39:15 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/07 14:33:26 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc((s1_len + s2_len + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, s1_len);
	ft_strlcpy(result + s1_len, s2, s2_len + 1);
	return (result);
}
