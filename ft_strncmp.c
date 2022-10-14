/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:30:40 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 12:40:52 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i =0;
    while((s1[i] == s2[i]) && ((s1[i] != '\0') || (s2[i] != '\0')))
        i++;
    if(s1[i] == s2[i])
        return (0);
    else
        return(1);
}
int main()
{
    // printf("%d\n",strncmp(NULL,"abcdd",5));
    printf("%d",ft_strncmp(NULL,"abcdd",5));
    return (0);
}