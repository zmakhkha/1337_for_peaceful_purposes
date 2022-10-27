/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:25:01 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 06:17:41 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	c_words(char *tmp, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while(tmp[i])
	{
		if(tmp[i]!= c && (tmp[i + 1] == c || tmp[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}


static	int lenght(char *tmp,int i, char c)
{
	int	res;

	res = 0;
	//while(tmp[i]== c && (tmp[i] != '\0'))
	//	i++;
	if (c_words(tmp, c))
		while(tmp[i] && tmp[i]!= c)
		{
			i++;
			res++;
		}
		return (res);
}



char	**ft_split(char	const *s, char c)
{
	char	**res;
	char	*tmp;
	int		i;
	int		j;
	int		n_words;
	int len;

	j = 0;
	tmp = (char *)s;
	n_words = c_words((char *)s, c);
	res = (char **)malloc((1 + n_words) * sizeof(char *));
	i = 0;
	while(i < n_words)
	{
		while(tmp[j] && tmp[j]== c)
			j++;
		len = lenght(tmp, j, c);
		//printf("size -> %d\n", len);
		//res[i] = (char *)malloc((len + 1) * sizeof (char));
		res[i] = ft_substr(s, j, len);
		j += len;
		//printf ("%d\n", j);
		i++;
	}
	res[n_words] = NULL;
	return (res);
}

//int main()
//{
//	int i = 0;
//	char * * tab = ft_split("tripouille", 0);
	
//	while (tab[i])
//	{
//		printf("%s\n", tab[i]);
//		i++;
//	}
//	//printf("%d\n", c_words("1-2--3---4----5-----42", '-'));
//}