/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:13:15 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/07 19:30:07 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((s1[i] && s2[i]) && s1[i] == s2[i]) && i + 1 < n)
		i++;
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
