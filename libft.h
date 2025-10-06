/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakalin <msakalin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 16:44:55 by msakalin          #+#    #+#             */
/*   Updated: 2025/10/06 14:44:54 by msakalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(char c);
int		ft_isdigit(int c);
int		ft_isprint(int a);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *p1, const void *p2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t ln);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int ch);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_strnstr(const char *str_1, const char *str_2, size_t n);

#endif
