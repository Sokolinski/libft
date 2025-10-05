/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:59:29 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/05 20:34:36 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		result;
	int		marker;

	marker = 1;
	i = 0;
	result = 0;
	while ((str[i] == ' ' && str[i] != '\0' && (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			marker = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * marker);
}
