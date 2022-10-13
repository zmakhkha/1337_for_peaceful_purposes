/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:48:38 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 21:59:40 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>
int
     ft_isprint(int c){
        c = (unsigned char) c;
        if((32 <= c) && (c <= 126)) 
            return (1);
        else
            return (0);
     }

int main(){
    printf("%d",isprint(126));
    printf("%d",ft_isprint(126));
}