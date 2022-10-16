/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:32:49 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 09:55:21 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
void *ft_memset(void *b, int c, size_t len)
{
    c = (unsigned char)c;
    char *b1 = (char*)b;
    int i;
    i = 0;
    while(i < len)
        {
            *(b1 +i) = c;
            i++;
        }
    return b1;
}
int main()
{
    char a[10];
    // printf("%s\n",memset(a,'s', 4));
    // printf("%s",ft_memset(a,'s', 4));
    printf("%p,%p",a,ft_memset(a,'s', 4));

}