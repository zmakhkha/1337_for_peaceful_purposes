/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:33:38 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 23:30:44 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
static size_t
     ft_strlen(const char *s){
        size_t i;
        i = 0;
        if(s != NULL){
            while(s && (s[i] != '\0')){
                i++;
            }
        
    }
    return (i);
}

size_t ft_strlcpy(char *dst,const char *src, size_t len)
{
    int i;
    char    *s;

    s = (char *)src;
    i = 0;
    // dst = (char *)src;
    
    while(i < len)
    {
        dst[i] = s[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst));
}

#include <string.h>
#include <stdio.h>
int main(){
    char *c = "abcd";
    char *d = "klmq";
    // printf("%lu:%s\n",ft_strlcpy(c,c+1,5),c);
    printf("%lu:%s\n",strlcpy(c +1 ,c ,5),c);
}