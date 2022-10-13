/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:37:33 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/13 21:41:46 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int
     ft_isalpha(int c){
        c = (unsigned char) c;
        if(((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122)))
            return (1);
        else
            return (0);
     }

static int
     ft_isdigit(int c){
        c = (unsigned char) c;
        if((48 <= c) && (c <= 57)) 
            return (1);
        else
            return (0);
     }

#include <ctype.h>
#include<stdio.h>
int
     ft_isalnum(int c){
        return((ft_isdigit(c)) || (ft_isalpha(c)));
     }

     int main(){
        
    printf("%d",isalnum('\0'));
    printf("%d",ft_isalnum('\0'));
}