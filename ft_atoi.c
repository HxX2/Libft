/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:15:37 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 23:19:44 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				s;
	int				i;

	res = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		if (res > LONG_MAX && s == 1)
			return (-1);
		if (res > LONG_MAX && s == -1)
			return (0);
		i++;
	}
	return (res * s);
}
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	char st[] = "-9223372036854775808";
// 	printf("%d\n",ft_atoi(st));
// 	printf("%d",atoi(st));
// }