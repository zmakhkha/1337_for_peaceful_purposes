/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:34 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/23 11:39:30 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	get_first(char *s, char *set)
{
	int	l1;
	int	l2;
	int	i;

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

static	int	get_last(char *s, char *set)
{
	int	l1;
	int	l2;
	int	i;

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l1;
	int		l2;
	char	*res;

	if (s1 && set)
	{
		l1 = get_first((char *)s1, (char *)set);
		l2 = get_last((char *)s1, (char *)set);
		res = (char *) malloc(l2 - l1 +1);
		if (!res)
			return (NULL);
		ft_strlcpy(res, s1 + l1, l2 - l1);
		return (res);
	}
	return (NULL);
}
