/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:17:41 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 21:26:35 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include <ctype.h>
int
     ft_isalpha(int c){
        c = (unsigned char) c;
        if(((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
            return (1);
        else
            return (0);
     }

int main(){
    printf("%d",isalpha('r'));
    
}