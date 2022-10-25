/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:33:38 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/25 08:36:40 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	char		*s;

	s = (char *)src;
	if(len != 0)
	{
		i = 0;
		len --;
		while (src[i] && i < len)
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(s));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char *src = strdup("coucou");
//	char *dest = malloc(1000);
//	memset(dest, 'A', 10);
//	int a;
//	a = ft_strlcpy(dest, src, -1);
//	//a = strlcpy(dest, src, -1);
//	printf("%s : %d\n", dest, a);
//}
