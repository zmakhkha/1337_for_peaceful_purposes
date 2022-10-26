/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:53:35 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 00:39:31 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<libc.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		t[len];

	if (start <= ft_strlen(s))
		strlcpy(t, (char *)s + start, len + 1);
	return (ft_strdup(t));
}

//int main()
//{
//	printf("%s", ft_substr("tripouille", 1, 1));
//}