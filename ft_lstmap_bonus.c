/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:38:25 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/07 21:38:41 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**head;
	t_list	*nwlst;
	t_list	*nwnode;

	nwnode = NULL;
	if (!lst || !f || !del)
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
// #include <stdio.h>
// int main()
// {
// 	t_list **head;
// 	t_list	*node;
// 	t_list	*new;
// 	t_list	*tmp;
// 	t_list	*dup;
// 	int i = 1;

// 	head = &node;
// 	node = ft_lstnew(&i);
// 	tmp = node;
// 	while (i <= 20)
// 	{
// 		new = ft_lstnew(&i);
// 		//ft_lstadd_back(head, new);
// 		tmp->next = new;
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	tmp = *head;
// 	dup = ft_lstmap(tmp,NULL,NULL);
// 	i = 1;
// 	while (i <= 20)
// 	{
// 		printf("%d\n", *(int *)(tmp->content));
// 		i++;
// 		if (dup)
// 			tmp = tmp->next;
// 	}
// 	return 0;
// }
