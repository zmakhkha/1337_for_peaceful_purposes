/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:22:46 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/24 21:09:50 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*tmp;
	unsigned char	t;

	t = (unsigned char)c;
	tmp = (char *)s;
	i = 0;
	while (i < n)
		{
			if (tmp[i] == t)
				return (tmp + i);
			i++;
		}
	return (NULL);
}
