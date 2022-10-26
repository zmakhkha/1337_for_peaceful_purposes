/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:42:50 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 00:02:07 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t		s1;

	s1 = ft_strlen((char *)haystack);
	i = 0;
	j = 0;
	res = NULL;
	if (!needle)
		res = (char *)haystack;
	if(haystack)
	{
		while ((i <= s1) && (i <= len))
		{
			if (haystack[i] == (char )needle[0])
			{
				while ((haystack[i + j] == needle[j]) && (needle[j] != '\0'))
					j++;
				if ((needle[j] == '\0') && (i + j) <= len)
					return ((char *)haystack + i);
			}
			i++;
		}
	}
	return (res);
}
