/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:33:21 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/16 02:04:17 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (i == ft_strlen(s) && s[i] != c)
		return (0);
	return ((char *)(s + i));
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
	char s[] = "dskjh fjjk lko kki neo kd";
	printf("%s\n", ft_strchr(s,'y'));
	printf("%s", strchr(s,'w'));
}*/