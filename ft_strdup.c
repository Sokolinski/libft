/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:36:07 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/06 17:23:59 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;

	result = malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s, ft_strlen(s) + 1);
	return (result);
}
