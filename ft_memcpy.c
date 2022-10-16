/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:20:04 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 11:49:41 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *ft_memcpy(void * dst, const void * src, size_t n)
{
    int i;
    i = 0;
    unsigned char tmp;
    char *d = (char*) dst;
    char *s = (char*) src;

    while(i < n)
    {
        d[i] = (unsigned char)s[i];
        i++;
    }
    return (dst);
}
int main()
{
    char a1[10];
    char a2[10];
    char *b="ghgh";
    // printf("%s",memcpy(a1,b,3));
    printf("%s",ft_memcpy(a1,b,3));
    return (0);
}