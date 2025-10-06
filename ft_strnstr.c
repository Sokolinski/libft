/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:22:51 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/06 14:30:55 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_1, const char *str_2)
{
	size_t	i;
	size_t	ln_str2;
	size_t	j;

	ln_str2 = ft_strlen(str_2);
	i = 0;
	j = 0;
	if (ln_str2 == 0)
		return ((char *)str_1);
	while (str_1[i])
	{
		while (str_1[i + j] == str_2[j] && str_1[i] && str_2[j])
		{
			j++;
		}
		if (j == ln_str2)
			return ((char *)str_1 + i - j);
		j = 0;
		i++;
	}
	return (NULL);
}
int main()
{
	ft_strnstr("123" ,"2");
	return 0;
}
