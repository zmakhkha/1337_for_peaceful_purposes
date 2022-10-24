/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:25:01 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/24 15:53:03 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	c_words(char *s1, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s1[i] == c)
		i++;
	while (s1[i] != '\0')
	{
		while (s1[i] == c)
			i++;
		if (s1[i] && s1[i - 1] == c && s1[i] != c)
			nbr++;
		i++;
	}
	if (s1[i - 1] == c)
		return (nbr);
	return (nbr + 1);
}

static	int	size_word(char **t, char c)
{
	int	i;

	i = 1;
	while (*(*t) == c)
		(*t)++;
	printf("\nbdia:%c\n",*(*t));
	while (*(*t) && *(*t) != c)
	{
		i++;
		(*t)++;
	}
	return (i);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	int		n;
	int		nbr;
	char	*t;
	char	**res;

	nbr = c_words((char *)s, c);
	t = (char *)s;
	i = 0;
	res = (char **)malloc((nbr + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < nbr)
	{
		n = size_word(&t, c);
		res[i] = (char *)malloc((n + 1) * sizeof(char));
		strlcpy(res[i], (char *)s, n + 1);
		i++;
		s += n;
	}
	res[i] = NULL;
	return (res);
}
