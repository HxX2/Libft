/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 04:59:30 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/30 06:27:19 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	
}

/*
	 [content|next-]-->[content|next-]-->[content|next-]-->NULL
lst--^
new-->[content|next-]-->NULL
v
	 [content|next-]-->[content|next-]-->[content|next-]-->NULL
lst--v
new-->[content|next-]-->p(*lst)

*/