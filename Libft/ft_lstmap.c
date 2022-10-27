/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:00:03 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 14:05:13 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	new = NULL;
	if (lst && f)
	{
		head = lst;
		while (head)
		{
			ft_lstadd_back(&new, ft_lstnew(f(head->content)));
			if (!new)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			head = head->next;
		}
	}
	return (new);
}
