/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:57:46 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/23 23:08:41 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*pos;
	int		i;

	i = 0;
	if (lst != NULL)
	{
		pos = lst;
		while (pos->next != NULL)
		{
			pos = pos->next;
			i++;
		}
		return (i);
	}
	return (0);
}
