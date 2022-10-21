/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:23:04 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/21 08:12:49 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>

char *ft_itoa(int n)
{
	int	tmp_n;
	int i;
	int j;

	tmp_n = n;
	i =0;
	j =0;
	
	while(tmp_n % 10 != 0)
		{
			tmp_n /= 10;
			i++;
		}
	if(n < 0)
		i++;
	char *res = (char*)malloc((i +1)*sizeof(char));
	j =i-1;
	tmp_n = n;
	if(n < 0)
		{
			res[0] = '-';
			tmp_n = n * -1;
		}
	while(tmp_n % 10 != 0)
		{
			res[j] =   '0' +(unsigned int)tmp_n % 10;
			tmp_n /= 10;
			j--;
		}
	return (res);
}
