/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:59:14 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 11:53:21 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
static     size_t
     ft_strlen(const char *s){
        size_t i;
        i = 0;
        while(s[i] != '\0'){
            i++;
        }
    return (i);
}

size_t  ft_strlcat(char * dst, const char * src, size_t len){
     int i; 
    int s1, s2;
    // char *tmp = (char *)src;
    s1 = ft_strlen(dst);
    s2 = ft_strlen(src);
    i = 0;
    if(len > s1)
    {
        while(i +s1 < len -1 ){
            dst[s1 + i] = src[i];
            i++;
        }
        dst[len] = '\0';
        }
    return (s1 + s2);
}
int main(){
    char a[10] = "abdaaa";
    char *b = NULL;
    int len = 1;
    // printf("%lu:%s\n",strlcat(a,b,len),a);    
    printf("%lu:%s",ft_strlcat(a,b,len),a);       
    return 0;
}