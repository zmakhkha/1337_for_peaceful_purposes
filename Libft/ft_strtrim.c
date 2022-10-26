/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:34 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 15:14:16 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l1;
	char	*res;
	int		i;
	int		index;

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
