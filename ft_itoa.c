/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:32:09 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/16 08:45:49 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		sn;
	int		i;

	i = 1;
	sn = n;
	while (sn > 9)
	{
		sn /= 10;
		i++;
	}
	p = malloc(sizeof(char) * i + 1);
	if (!p)
		return (NULL);
	p[i + 1] = '\0';
	while (--i >= 0)
	{
		p[i] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s",ft_itoa(0));
// }

// fix intmin / negative values