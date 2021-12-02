/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:38:25 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/02 18:05:20 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	*nwlst;
	t_list	*nwnode;

	nwnode = NULL;
	if (!lst)
		return (NULL);
	head = &nwlst;
	nwlst = ft_lstnew(f(lst->content));
	while (lst)
	{
		nwnode = ft_lstnew(f(lst->content));
		if (!nwnode)
			ft_lstclear(head, del);
		ft_lstadd_back(head, nwnode);
		lst = lst->next;
	}
	return (nwlst);
}
