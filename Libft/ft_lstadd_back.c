/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:09:48 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 10:14:15 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	if(*lst == NULL)
		*lst = new;
	else
	{
		pos = *lst;
		while (pos->next != NULL)
			pos = pos->next;
		pos-> next = new;
	}
}