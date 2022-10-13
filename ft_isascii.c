/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:43:47 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 21:47:48 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
     ft_isascii(int c){
        c = (unsigned char) c;
        if((00 <= c) && (c <= 127)) 
            return (1);
        else
            return (0);
     }

#include <libc.h>
#include <ctype.h>

int main(){
    printf("%d",isascii(128));
    printf("%d",ft_isascii(128));
}