/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:53:15 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 12:55:04 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (ft_isdigit(n))
	{
		ft_putchar_fd('0' + n, fd);
	}
}
int main()
{
	
}