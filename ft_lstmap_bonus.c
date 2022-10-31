/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:00:03 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/29 17:53:23 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*pos;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = NULL;
	if (lst && f)
	{
		pos = lst;
		while (pos)
		{
			tmp = ft_lstnew(f(pos->content));
			if (!tmp)
			{
				ft_lstdelone(tmp, del);
				return (NULL);
			}
			ft_lstadd_back(&new, tmp);
			pos = pos->next;
		}
	}
	return (new);
}
