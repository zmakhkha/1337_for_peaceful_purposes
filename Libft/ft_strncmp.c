/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:30:40 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 15:05:42 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = 0;
	while ((s01[i] == s02[i]) && (i < n))
		i++;
	if (i == n)
		return (s01[i - 1] - s02[i - 1]);
	return (s01[i] - s02[i]);
}
