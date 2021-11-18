/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 04:38:22 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/16 05:18:17 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb2;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	nb2 = n;
	if (nb2 > 9)
	{
		ft_putnbr_fd(nb2 / 10, fd);
		ft_putnbr_fd(nb2 % 10, fd);
	}
	else
		ft_putchar_fd(nb2 + '0', fd);
}
