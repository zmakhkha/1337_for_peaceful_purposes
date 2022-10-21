/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:25:01 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/20 22:05:55 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
size_t  ft_strlen(const char *s){
    size_t i;
    i = 0;
    while(s[i] != '\0')
        i++;
    return (i);
}

#include<string.h>
char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    c = (char)c;
    while((s[i] != '\0') && (s[i] != c))
        i++;
    if(s[i] == c)
    return((char*)&s[i]);

    if(s[i] == '\0')
        return(NULL);
    return(NULL);
}

char **ft_split(char const *s, char c)
{
    char **res = (char **)malloc(3* sizeof(char*));
    char *tmp = (char *)s;
    int i;
    i =0;
    int ind;
    ind =-1;
    while(tmp[i] != '\0' && tmp[i] != c)
        i++;
    if (tmp[i] == '\0')
        {
            res[0] = (NULL);
            res[1] = (NULL);
            res[2] = (NULL);
            return (res);
        }
    else if(tmp[i] == c)
        {
            i =0;
            while(tmp[i] != c)
            i++;
            res[0] = (char*) malloc ((i+1)* sizeof(char));
            if(!res[0])
                return(NULL);
            int j;
            j=0;
            while(tmp[j] != c)
            {
                res[0][j] = tmp[j];
                j++;
            }
            res[0][j] = '\0';
            int ind;
            ind = i+1;
            i =0;
            while(tmp[ind +i] != '\0')
                    i++;
            res[1] = (char*) malloc ((i +1)* sizeof(char));   
            if(!res[0])
                return(NULL);
            i =0;
            while(tmp[ind +i] != '\0')
            {
                res[1][i] = tmp[ind +i];
                i++;
            }
            res[1][i +1] = '\0';
            res[2] = (NULL);
            return(res);
        }
    return (NULL);
}
#include<string.h>
int main()
{
    char **a = ft_split("1X", 'X');
    printf("%s", a[1]);
}