/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:38:25 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/09 23:48:03 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	*nwlst;
	t_list	*nwnode;

	nwnode = NULL;
	if (!lst || !f)
		return (NULL);
	head = &nwlst;
	nwlst = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		nwnode = ft_lstnew(f(lst->content));
		if (!nwnode)
		{
			ft_lstclear(head, del);
			return (NULL);
		}
		ft_lstadd_back(head, nwnode);
		lst = lst->next;
	}
	return (nwlst);
}
