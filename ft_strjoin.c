/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:39:15 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 18:58:55 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	if (s1 == NULL && s2 == NULL)
	{
		result = NULL;
		return (result);
	}
	s1_len = 0;
	if (s1)
		s1_len = ft_strlen(s1);
	s2_len = 0;
	if (s2)
		s2_len = ft_strlen(s2);
	result = malloc((s1_len + s2_len + 1));
	if (result == NULL)
		return (NULL);
	if (s1)
		ft_strlcpy(result, s1, s1_len + 1);
	if (s2)
		ft_strlcpy(result + s1_len, s2, s2_len + 1);
	return (result);
}
