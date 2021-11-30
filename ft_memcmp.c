/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:01:14 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/30 12:07:17 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i + 1 < n)
		i++;
	if (n == 0)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int main()
// {
// 	int	a[] = {1, 2, 300, 4};
// 	int	b[] = {1, 2, 3, 4};
// 	44-2-0-0
// 	44-1-0-0
// 	printf("%d", ft_memcmp(a, b, 16));
// 	return (0);
// }