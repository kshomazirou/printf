/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_oka.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshoma <kshoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:30:24 by kshoma            #+#    #+#             */
/*   Updated: 2023/10/03 15:40:19 by kshoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBft_oka_H
# define LIBft_oka_H

# include <unistd.h>
# include <stdlib.h>

int		ft_oka_isalpha(int c);
int		ft_oka_isdigit(int c);
int		ft_oka_isalnum(int c);
int		ft_oka_isascii(int c);
int		ft_oka_isprint(int c);
size_t	ft_oka_strlen(const char *str);
void	*ft_oka_memset(void *buf, int ch, size_t n);
void	ft_oka_bzero(void *s, size_t n);
void	*ft_oka_memcpy(void *buf1, const void *buf2, size_t n);
void	*ft_oka_memmove(void *buf1, const void *buf2, size_t n);
size_t	ft_oka_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_oka_strlcat(char *dst, const char *src, size_t size);
int		ft_oka_toupper(int c);
int		ft_oka_tolower(int c);
char	*ft_oka_strchr(const char *s, int c);
char	*ft_oka_strrchr(const char *s, int c);
int		ft_oka_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_oka_memchr(const void *buf, int ch, size_t n);
int		ft_oka_memcmp(const void *buf1, const void *buf2, size_t n);
char	*ft_oka_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_oka_atoi(const char *str);
void	*ft_oka_calloc(size_t n, size_t size);
char	*ft_oka_strdup(const char *string);
char	*ft_oka_substr(char const *s, unsigned int start, size_t len);
char	*ft_oka_strjoin(char const *s1, char const *s2);
char	*ft_oka_strtrim(char const *s1, char const *set);
char	**ft_oka_split(char const *s, char c);
char	*ft_oka_itoa(int n);
char	*ft_oka_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_oka_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_oka_putchar_fd(char c, int fd);
void	ft_oka_putstr_fd(char *s, int fd);
void	ft_oka_putendl_fd(char *s, int fd);
void	ft_oka_putnbr_fd(int n, int fd);

#endif
