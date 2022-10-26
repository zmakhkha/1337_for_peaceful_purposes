/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:23:04 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/26 06:26:05 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	int	get_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*get_limits(int n)
{
	char	*res;

	res = NULL;
	if (n == 2147483647)
		res = ft_strdup("2147483647");
	else if (n == -2147483648)
		res = ft_strdup("-2147483648");
	else if (n == 0)
		res = (ft_strdup("0"));
	return res;
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		tmp_n;
	char	*res;

	res = get_limits(n);
	if (res == NULL)
	{
		tmp_n = n;
		j = 0;
		i = get_size(n);
		res = (char *)malloc((i + 1) * sizeof(char));
		j = i - 1;
		if (n < 0)
		{
			res[0] = '-';
			tmp_n = n * -1;
		}
		while (tmp_n > 0)
		{
			res[j--] = '0' + (int)tmp_n % 10;
			tmp_n /= 10;
		}
		res[i] = 0;
	}
	return (res);
}
