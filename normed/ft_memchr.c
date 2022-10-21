/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:22:46 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 13:49:48 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

#include<stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	c = (unsigned char)c;
	int i;
	i=0;
	char *tmp;
	tmp = (char*)s;
	while(i++ < n)
		if(tmp[i] == c)
			return (tmp+i);
	return (NULL);
}
