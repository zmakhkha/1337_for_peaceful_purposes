/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:21:30 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/17 19:03:57 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isdigit(int c)
{
	c = (unsigned char) c;
	if ((48 <= c) && (c <= 57))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	char	*tmp;
	int		i;
	int		j;
	int		sign;
	int		res;

	sign = 1;
	*tmp = (char *) str;
	i = 0;
	res = 0;
	while (tmp[i] == ' ')
		i++;
	while (ft_isdigit(tmp[i]))
	{
		res += tmp[i] - 48 ;
		if (ft_isdigit(tmp[i + 1]))
			res = res * 10;
		if (!ft_isdigit(tmp[i + 1]))
			return (res);
		i++;
	}
	if (((tmp[i] == '+') || (tmp[i] == '-')) && ft_isdigit(tmp[i +1]))
	{
		if (tmp[i] == '-')
			sign = -1;
		j = i + 1;
		while (ft_isdigit(tmp[j]))
		{
			res += tmp[j] - 48 ;
			if (ft_isdigit (tmp[j + 1]))
				res = res * 10;
			j++;
		}
		return (res * sign);
	}
	return (0);
}
