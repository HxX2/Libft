/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:43:43 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/15 23:10:42 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (!s1 || !s2)
		return (0);
	ptr = ft_strdup(s1);
	if (!ptr)
		return (0);
	ft_strlcat(ptr, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (ptr);
}
