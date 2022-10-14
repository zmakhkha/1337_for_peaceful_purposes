/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:17:54 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 12:30:05 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *ft_strrchr(const char *s, int c)
{
        int i;
        int ind;
        ind = 0;
        i = 0;
        c = (char)c;
        while(s[i] != '\0')
            {
                if((s[i] == c))
                    ind = i;
                i++;
            }
        if(s[i] == c)
            return((char*)&s[i]); 
        else
            return (NULL);
}
#include <string.h>
#include <stdio.h>
int main()
{
    printf("%s\n",strrchr("abcdcd",'e'));
    printf("%s",ft_strrchr("abcdcd",'e'));
    return (0);
}