/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:53:35 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 13:00:09 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	i = 0;
	if (len > size)
		len = size;
	t = (char *)malloc((len + 1) * sizeof(char));
	if (!t)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(t, s + start, len + 1);
	else
		*t = 0;
	return (t);
}
