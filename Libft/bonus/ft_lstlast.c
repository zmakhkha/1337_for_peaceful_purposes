/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:05:21 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/23 23:08:49 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pos;

	if (lst != NULL)
	{
		pos = lst;
		while (pos->next != NULL)
			pos = pos->next;
		return (pos);
	}
	return (0);
}
