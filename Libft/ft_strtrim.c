/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:34 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 06:13:07 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_first(char *s, char *set)
{
	int l1;
	int l2;
	int i;

	i = 0;
	l1 = ft_strlen(s);
	l2 = ft_strlen(set);
	while (s[i] == *set && *set != '\0')
	{
		i++;
		set++;
	}
	if (*set == '\0')
		return (i);
	else
		return (0);
}

static int get_last(char *s, char *set)
{
	int l1;
	int l2;
	int i;

	i = 0;
	l1 = ft_strlen(s);
	l2 = ft_strlen(set);
	while (s[l1 - l2 + i] == *set && *set != '\0')
	{
		i++;
		set++;
	}
	if (*set == '\0')
		return (l1 - l2);
	else
		return (l1);
}

char *ft_strtrim2(char const *s1, char const *set)
{
	int l1;
	int l2;
	char *res;

	if (s1 && set)
	{
		l1 = get_first((char *)s1, (char *)set);
		l2 = get_last((char *)s1, (char *)set);
		res = (char *)malloc(l2 - l1 + 1);
		if (!res)
			return (NULL);
		ft_strlcpy(res, s1 + l1, l2 - l1 + 1);
		return (res);
	}
	return (NULL);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int l1;
	char *res;
	int i;
	int index;

	if (s1 && set)
	{
		l1 = ft_strlen((char *)s1) - 1;
		while (ft_strchr(set, s1[l1]) && l1)
			l1--;
		index = 0;
		while (s1[index] && ft_strchr(set, s1[index]))
			index++;
		i = l1 - index;
		if (i < 0)
			i = 0;
		res = (char *)malloc(sizeof(char) * i + 1);
		if (!res)
			return (NULL);
		i = 0;
		while (s1[index] && index <= l1)
		{
			res[i] = s1[index];
			index++;
			i++;
		}
		res[i] = 0;
		return (res);
	}
	return (NULL);
}
//void checkLeaks(void)
//{
//	system("leaks a.out");
//}
//int main()
//{
//	atexit(checkLeaks);
//	char a[] = " df yx abcxyxy ";
//	char *t = "d  ";
//	char *buff;

//	buff = ft_strtrim("   xxx   xxx", " x");
//	printf("|%s|", buff);
//	free(buff);
//}