/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:20:04 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 10:46:30 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *
     ft_memcpy(void * dst, const void * src, size_t n)
     {
        int i;
        i = 0;
        while(i++ < n)
        {
            dst = (void *)src;
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