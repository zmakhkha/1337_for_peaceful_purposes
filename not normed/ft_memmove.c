/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:48:50 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 11:20:15 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	tmp;
	char			*d;
	char			*s;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	while (i < n)
	{
		d[i] = (unsigned char)s[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*tmp;
	int		s1;
	int		s2;
	int		ind;
	size_t	i;
	int		j;

	s1 = ft_strlen(d);
	s2 = ft_strlen(s);
	d = (char *) dst;
	s = (char *) src;
	ind = 0;
	i = 0;
	j = 0;
	while (i++ < s2)
	{
		while (j++ < s1)
		{
			if (s[j] == d[i])
				ind = 1;
		}
	}
	if (ind == 1)
	{
		while ((-- len) != -1)
		{
			if (s[len] != '\0')
				d[len] = s[len];
		}
		return (d);
	}
	else
		return (ft_memcpy (dst, src, len));
}
