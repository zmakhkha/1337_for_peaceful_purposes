/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:59:14 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/10 20:07:13 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
int ft_strlen(char * dst);

size_t  gt_strlcpy(char * dst, const char * src, size_t len){
    // if(!ft_strlen(dst) || !dst)
    //     return (len);
    // else if(!ft_strlen(src) || !src)
    //     return(ft_strlen(dst));
    int i;
    int s1, s2;
    s1 = ft_strlen(dst);
    s2 = ft_strlen(src);
    if(len > 0){
        i = ;
        i = 0;
        while((i < s2) && (i < len -1)){
            dst[s1 + i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
}
int main(){
    char a[10] = "abcd";
    char *b = "xyz";
    int len = 3;
    printf("%lu:%s",strlcat(a,b,len),a);


    char dest[50] = "This is an";
    char *src = " example";
 
    strlcat(dest, src, 5);

    printf("%s",dest);
    
    return 0;
}