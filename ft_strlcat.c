/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:59:14 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/25 10:40:42 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	s1;
	size_t	s2;

	s1 = ft_strlen(dst);
	s2 = ft_strlen(src);
	if (len == 0 && len < s1)
		return (s2 + len);
	else
	{
		i = 0;
		if (len == 1)
		{
			dst[0] = src[0];
			dst[1] = '\0';
		}
		else
		{
			len--;
			while ((i < len))
				
			{
				dst[s1 + i] = src[i];
				i++;
			}
			dst[len] = '\0';
		}
		return (s1 + s2);
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char dest[30];
	memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	//printf("%lu " ,strlcat(dest, src, 1));
	printf("%lu \n", ft_strlcat(dest, src, 1));
	printf("%s",dest);
}
