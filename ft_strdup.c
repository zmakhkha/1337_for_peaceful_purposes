/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:01:51 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/28 21:13:10 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*res;
	char	*s;

	s = (char *)s1;
	len = ft_strlen(s);
	res = (char *) malloc(len + 1);
	if (!res)
		return (res);
	if (s1)
		ft_strlcpy(res, s, len + 1);
	else
		return (NULL);
	return (res);
}
