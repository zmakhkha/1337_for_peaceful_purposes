/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:11:22 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/18 16:48:27 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ss1;
	int		ss2;
	char	*k;

	if (!s1 || !s2)
		return (NULL);
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	k = (char *) malloc(ss1 + ss2 + 1);
	i = 0;
	while (i < ss1)
	{
		k[i] = s1[i];
		i++;
	}
	while (i < ss2 + ss1)
	{
		k[i] = s2[i - ss1];
		i++;
	}
	k[i] = '\0';
	return (k);
}
