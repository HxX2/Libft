/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:27:43 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/16 17:19:41 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len)
		((unsigned char *)b)[--len] = c;
	return (b);
}

/*int main()
{
	int tab[6] = {1, 2, 2147483647, -2147483648, 0, -1};

	ft_memset(tab, 0, sizeof(tab));
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", tab[i]);
	}
}*/

// 00000000 00000000 00000000 00000001