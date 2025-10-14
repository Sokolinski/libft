/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:56:27 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/14 18:48:32 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(long n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*convert_to_string(long n, char *res, int is_negative)
{
	int	i;
	int	digit;

	i = 0;
	if (n == 0)
	{
		res[i++] = '0';
		res[i] = '\0';
		return (res);
	}
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n != 0)
	{
		digit = n % 10;
		res[i++] = digit + '0';
		n = n / 10;
	}
	if (is_negative)
		res[i++] = '-';
	res[i] = '\0';
	return (res);
}

static char	*reverse_string(char *res, int size)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = res[start];
		res[start] = res[end];
		res[end] = temp;
		start++;
		end--;
	}
	return (res);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		n_size;
	int		i;

	n = (long)n;
	n_size = number_size(n);
	convert_to_string(n, buffer, 0);
	reverse_string(buffer, n_size);
	i = 0;
	while (i < n_size)
	{
		write(fd, &buffer[i], 1);
		i++;
	}
}
