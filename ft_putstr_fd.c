/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:36:22 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 17:41:09 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
