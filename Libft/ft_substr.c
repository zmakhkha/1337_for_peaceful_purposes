/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:53:35 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 15:39:00 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;

	t = (char *)malloc((len + 1)*sizeof(char));
	if(!t)
		return(NULL);
	if (start <= ft_strlen(s))
	{
		ft_memmove(t, s + len, len);
		t[len] = 0;
	}
	return (t);
}
