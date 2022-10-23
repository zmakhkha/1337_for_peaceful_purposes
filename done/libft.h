
#ifndef LIBFT_H
#define LIBFT_H

	#include<string.h>
	#include<stdio.h>
	#include<stdlib.h>

	size_t	ft_strlen(const char *s);
	char *ft_strjoin(char const *s1, char const *s2);
	char *ft_strtrim(char const *s1, char const *set);
	char **ft_split(char const *s, char c);
	char *ft_itoa(int n);
	char *ft_strmapi(char const *s, char (*f)(unsigned
	int, char));
	void ft_striteri(char *s, void (*f)(unsigned int,
	char*));
	void ft_putchar_fd(char c, int fd);
	void ft_putstr_fd(char *s, int fd);

	void ft_putendl_fd(char *s, int fd);
	void ft_putnbr_fd(int n, int fd);
	size_t	ft_strlcpy(char *dst, const char *src, size_t len);

#endif