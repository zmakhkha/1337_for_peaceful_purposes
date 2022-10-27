/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:16:33 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 13:09:53 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst)
	{
		if ((*lst)->next == NULL)
		{
			(del)((*lst)->content);
			free ((*lst)->next);
			free(*lst);
			*lst = NULL;
		}
		else
			ft_lstclear(&(*lst)->next, del);
	}
}
