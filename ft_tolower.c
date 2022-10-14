/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:55:47 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 12:06:43 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
     ft_tolower(int c){
        c = (unsigned char)c;
        if(('A' <= c) && (c<= 'Z'))
        {
            c =c +('a' - 'A');
        }
        return (c);
     }

#include <stdio.h>
#include <ctype.h>
int main()
{
    char a = 'j';
    printf("%c\n",tolower(a));
    printf("%c",ft_tolower(a));
    
}
