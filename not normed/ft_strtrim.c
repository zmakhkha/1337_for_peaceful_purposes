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
#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*s;

	s = (char *)src;
	i = 0;
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && ((s1[i] != '\0') \
		&& (s2[i] != '\0')) && (i < n))
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

#include<stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;

	res = NULL;
	if (!s1 && !set)
	{
			printf("yes");
		if (ft_strlen(s1) >= ft_strlen(set))
		{
			if (!ft_strncmp(s1, set, ft_strlen(set)) \
				&& !ft_strncmp(s1 + ft_strlen (s1) - \
				ft_strlen(set), set, ft_strlen(set)))
			{
				res = (char *) malloc(ft_strlen (s1) - 2 * ft_strlen(set) + 1);
				ft_strlcpy(res, s1 + ft_strlen(set), \
					ft_strlen (s1) - 2 * ft_strlen(set) + 1);
			}
			else if (!ft_strncmp(s1, set, ft_strlen(set)))
			{
				res = (char *) malloc(ft_strlen (s1) - ft_strlen(set) + 1);
				ft_strlcpy(res, s1 + ft_strlen(set), \
				ft_strlen (s1) - ft_strlen(set) + 1);
			}
			else if (!ft_strncmp(s1 + ft_strlen (s1) - \
			ft_strlen(set), set, ft_strlen(set)))
			{
				res = (char *) malloc(ft_strlen (s1) - ft_strlen(set) + 1);
				ft_strlcpy(res, s1, ft_strlen (s1) - ft_strlen(set) + 1);
			}
		}
		else
			return (NULL);
	}
	return (res);
}


int main()
{
	
	printf("%s", ft_strtrim("abcfabc", "abc"));
}