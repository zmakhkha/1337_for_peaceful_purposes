/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:45:17 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 13:56:39 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *s01 = (char*)s1;
    char *s02 = (char*)s2;
    int i;
    i=0;
    while((s01[i] == s02[i]) && ((s01[i] != '\0') || (s02[i] != '\0')))
        i++;
    if(s01[i] == s02[i])
        return (0);
    else if (s01[i] > s02[i])
        return(1);
    else 
        return(-1);
}
#include<stdio.h>
int main()
{
    printf("%d",ft_memcmp("zbcdd","hbcd",3));
    return (0);
} 