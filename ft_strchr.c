/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:07:14 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 12:16:55 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *
     ft_strchr(const char *s, int c)
     {
        int i;
        i = 0;
        c = (char)c;
        while((s[i] != '\0') && (s[i] != c))
            i++;
        return((char*)&s[i]);
     }
#include<string.h>
#include<stdio.h>
int main()
{
    // printf("%s",strchr(NULL,'d'));
    printf("%s",ft_strchr(NULL,'d'));
}