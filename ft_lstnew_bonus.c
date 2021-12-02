/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:35:12 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/02 11:48:19 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}

// #include <stdio.h>
// int main()
// {
// 	int x = 6557;
// 	// i = malloc(sizeof(int) * 1);
// 	t_list *p;
// 	p = ft_lstnew(&x);
// 	//int z = (int)p->content;
// 	printf("%d", *(int *)p->content);
// }