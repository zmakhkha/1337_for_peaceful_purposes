/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:55:47 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/14 12:05:05 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
     ft_toupper(int c){
        c = (unsigned char)c;
        if(('a' <= c) && (c<= 'z'))
        {
            c =c -('a' - 'A');
        }
        return (c);
     }

#include <stdio.h>
#include <ctype.h>
int main()
{
    char a = 'i';
    printf("%c\n",toupper(a));
    printf("%c",ft_toupper(a));
    
}
