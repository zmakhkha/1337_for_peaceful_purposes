/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmakhkha <zmakhkha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:16:33 by zmakhkha          #+#    #+#             */
/*   Updated: 2022/10/27 13:44:54 by zmakhkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*next;

	head = (*lst);
	if (*lst && del)
	{
		while (head)
		{
			next = head->next;
			ft_lstdelone(head, del);
			head = next;
		}
		//if ((*lst)->next == NULL)
		//	ft_lstdelone(*lst, del);
		//else
		//	ft_lstclear(&(*lst)->next, del);
	}
}


//int main()
//{
//	t_list *head;

//	head = ft_lstnew("helo");
//	ft_lstadd_back(&head, ft_lstnew("word"));
//	ft_lstadd_back(&head, ft_lstnew("!"));

//	t_list *ptr;
	
//}