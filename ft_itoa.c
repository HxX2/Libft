/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:32:09 by zlafou            #+#    #+#             */
/*   Updated: 2021/12/02 18:07:50 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_nitoa(int n)
{
	char	*p;
	int		sn;
	int		i;

	i = 2;
	sn = n;
	while (sn < -9)
	{
		sn /= 10;
		i++;
	}
	p = malloc(sizeof(char) * i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	while (--i > 0)
	{
		p[i] = ((n % 10) * -1) + '0';
		n /= 10;
	}
	p[i] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		sn;
	int		i;

	if (n < 0)
		return (ft_nitoa(n));
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
	p[i] = '\0';
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
// 	printf("%s",ft_itoa(2147483647));
// }