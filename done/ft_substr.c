/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:53:35 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/17 20:20:12 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		c;
	char		*a;
	char		*s1;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	if ((len == 0) || ft_strlen(s1) == start)
		return (0);
	j = 0;
	c = (unsigned char) start;
	i = 0;
	while (s1[i] != c)
		i++;
	a = (char *)malloc(len);
	while ((j < len - 1) && s1[j] != '\0')
	{
		a[j++] = s1[i++];
	}
	return (a);
}
