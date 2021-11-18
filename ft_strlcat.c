/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:21 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/03 18:45:53 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	rtn;

	sl = 0;
	dl = 0;
	while (src[sl])
		sl++;
	while (dest[dl])
		dl++;
	if (size <= dl)
		rtn = size + sl;
	else
		rtn = dl + sl;
	sl = 0;
	while ((src[sl]) && (dl + sl + 1 < size))
	{
		dest[dl + sl] = src[sl];
		sl++;
	}
	dest[dl + sl] = 0;
	return (rtn);
}
