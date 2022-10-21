/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:34 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/20 19:23:23 by zmakhkha         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size_s1;
	int		size_trim;
	char	*tmp;
	int		size_res;
	int		i;
	int		j;
	int		k;
	char	*res;

	tmp = (char *) s1;
	size_s1 = ft_strlen(s1);
	size_trim = ft_strlen(set);
	if (size_s1 >= size_trim)
	{
		i = 0;
		while (tmp[size_s1 - size_trim + i] == set[i])
			i++;
		if (set[i] == '\0')
		{
			tmp[size_s1 - size_trim + i] = '\0';
			k = ft_strlen(tmp);
			size_res = k - size_trim + 1;
		}
		i = 0;
		while (tmp[i] == set[i])
			i++;
		if (set[i] == '\0')
		{
			k = ft_strlen(tmp);
			size_res = k - size_trim + 1;
			res = (char *)malloc(size_res);
			if (!res)
				return (NULL);
			j = 0;
			while (tmp[j] != '\0')
			{
				res[j] = tmp[size_trim + j];
				j++;
			}
			res[j] = '\0';
		}
		res = (char *)malloc(size_res);
		if (!res)
			return (NULL);
		while (tmp[j] != '\0')
		{
			res[j] = tmp[size_trim + j];
			j++;
		}
		res[j] = '\0';
		return (res);
	}
	else
		return (NULL);
}
