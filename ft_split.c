/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:25:01 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/31 22:49:23 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	c_words(char *tmp, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (tmp[i])
	{
		if (tmp[i] != c && (tmp[i + 1] == c || tmp[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

static int	lenght(char *tmp, int i, char c)
{
	int	res;

	res = 0;
	if (c_words(tmp, c))
	{
		while (tmp[i] && tmp[i] != c)
		{
			i++;
			res++;
		}
	}
	return (res);
}
static void	free_byte(char ***a, int i)
{
	while(i)
		free(a[i]);
	free (a);	
}

char	**ft_split(char	const *s, char c)
{
	char	**res;
	char	*tmp;
	int		i;
	int		j;
	int		len;

	j = 0;
	tmp = (char *)s;
	res = (char **)malloc((1 + c_words((char *)s, c)) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < c_words((char *)s, c))
	{
		while (tmp[j] && tmp[j] == c)
			j++;
		len = lenght(tmp, j, c);
		res[i] = ft_substr(s, j, len);
		if (!res[i])
		{
			free_byte(&res, i);
			return (NULL);
		}
		j += len;
		i++;
	}
	res[c_words((char *)s, c)] = NULL;
	return (res);
}

//int main()
//{
//	char **tab = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
//	int i = -1;

//	while (tab[++i])
//		printf("%s\n", tab[i]);
		
//	printf("%s\n", tab[i]);
//	system("leaks a.out");
//	//while(1){};
//}