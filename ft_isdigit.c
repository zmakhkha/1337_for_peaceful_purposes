/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:17:41 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 21:37:04 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>
int
     ft_isdigit(int c){
        c = (unsigned char) c;
        if((48 <= c) && (c <= 57)) 
            return (1);
        else
            return (0);
     }

int main(){
    printf("%d",ft_isdigit(48));
}