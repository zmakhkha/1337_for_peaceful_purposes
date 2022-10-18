/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:50:34 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/18 19:36:14 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    c = (char)c;
    while((s[i] != '\0') && (s[i] != c))
        i++;
    return((char*)&s[i]);
}

size_t  ft_strlen(const char *s){
    size_t i;
    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}
#include<stdlib.h>
#include<stdio.h>
char *ft_strtrim(char const *s1, char const *set)
{
    if(!s1)
        return (NULL);
    char *s;
    char *trim;
    s = (char*)s1;
    trim = (char*)set;
    int i, len1, len2, j;
    i=0;j=0;
    len1 = ft_strlen(trim);
    len2 = ft_strlen(s);
    while ((i < len2) && (trim[i] != '\0') && (s[i] == trim[i]))
        i++;
    if (trim[i] == '\0')
        {
            int j =0;
            int l1 = ft_strlen(s+i);
            // printf("hadi l1: %d", l1);
            char *k = (char*)malloc(l1+1);
            j =0;
            while (j <l1)
                {
                    k[j]= s[i];
                    i++;
                    j++;
                }
            k[i] = '\0';
            return(k);
        }
}
int main()
{
    // printf("%lu", ft_strlen(ft_strtrim("abchgig", "abc")));
    printf("%s", ft_strtrim("abhchgig", "abc"));
}