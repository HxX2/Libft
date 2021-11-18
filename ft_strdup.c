/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:43:23 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/06 19:46:22 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dup;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	dup = (char *)malloc(sizeof(*s1) * i + 1);
	if (!dup)
		return (0);
	p = dup;
	while (*s1)
		*(dup++) = *(s1++);
	*dup = 0;
	return (p);
}
