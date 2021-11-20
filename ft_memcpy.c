/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:40:07 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/18 22:01:52 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[20] = "abcdefgh";
// 	printf("%s\n", ft_memcpy(src+2, src, 6));
// 	// printf("%s", memcpy(null, null, 3));
// }