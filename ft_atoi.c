/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:21:30 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/16 15:19:09 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static spaces(int d)
{
    char c;
    c = (unsigned char)d;
    if(c == ' ')
        return(1);
    return (0);
}

static int ft_isdigit(int c){
        c = (unsigned char) c;
        if((48 <= c) && (c <= 57)) 
            return (1);
        else
            return (0);
    }

int ft_atoi(const char *str)
{
    char *tmp = (char*) str;
    int i;
    int j;
    i=0;
    while(spaces(tmp[i]))
    {
        i++;
        if(tmp[i] == '+')
        {
            j = i+1;
            while(ft_isdigit(tmp[j]))
                
        } 
    }
    return(0);
}
#include<stdio.h>
int main()
{
    printf("%d", atoi(NULL));
    return(0);
}