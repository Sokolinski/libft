/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:06:12 by marvin            #+#    #+#             */
/*   Updated: 2025/10/04 17:06:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int age;
};

int ft_memcmp( const void* p1, const void* p2, size_t n)
{
	size_t	i;
	unsigned char	*cp1;
	unsigned char	*cp2;

	cp1 = (unsigned char *) p1;
	cp2 = (unsigned char *) p2;

	i = 0;
	while (i < n )
	{
		if (cp1[i] != cp2[i])
			return (cp1[i] - cp2[i]);

		i++;
	}
	return (0);
}
