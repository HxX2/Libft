/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:15:37 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/05 21:02:19 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	s;
	int	i;

	res = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * s);
}
/*#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char st[] = "-2147483649";
	printf("%d\n",ft_atoi(st));
	printf("%d",atoi(st));
}*/