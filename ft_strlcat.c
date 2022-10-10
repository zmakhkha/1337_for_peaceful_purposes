/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:59:14 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/10 19:40:24 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
int ft_strlen(char * dst);

// size_t  strlcpy(char * dst, const char * src, size_t len){
//     if(!ft_strlen(dst) || !dst)
//         return (len);
//     else if(!ft_strlen(src) || !src)
//         return(ft_strlen(dst));
// }
int main(){
    char a[10] = "abcd";
    char *b = "xyz";
    int len = 4;
    printf("%lu:%s",strlcat(a,b,len),a);
}