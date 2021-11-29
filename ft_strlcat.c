/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:21 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/29 20:19:27 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	rtn;

	sl = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (sl);
	dl = ft_strlen(dest);
	if (size <= dl)
		return (size + sl);
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

// int main(void)
// {
// 	char dest[] = "fffff";
// 	char src[] = "ggggggggggg";

// 	ft_strlcat(NULL, src, 0);
// }