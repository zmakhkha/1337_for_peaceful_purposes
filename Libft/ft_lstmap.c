/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:00:03 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 13:15:33 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	if (lst && f)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
			return (NULL);
		new = lst;
		ft_lstiter(new, del);
		return (new);
	}
	return (NULL);
}
