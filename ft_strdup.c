/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:43:23 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 11:59:00 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dup;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	dup = (char *)malloc(sizeof(*s1) * i + 1);
	if (!dup)
		return (0);
	j = 0;
	while (s1[j])
	{
		dup[j] = s1[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
