/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:41:26 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/02 15:46:20 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main()
// {
// 	t_list *list;
// 	t_list **head;
// 	int i = 1;

// 	head = &list;
//  	list = ft_lstnew(ft_strdup("0"));
// 	while (i <= 10)
// 	{
// 		ft_lstadd_front(head, ft_lstnew(ft_strdup(ft_itoa(i))));
// 		i++;
// 	}
// 	ft_lstadd_front(head, ft_lstnew(ft_strdup("the start")));
// 	ft_lstadd_back(head, ft_lstnew(ft_strdup("the end")));
// 	i = 0;
// 	while (i <= 12)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 		i++;
// 	}
// }
