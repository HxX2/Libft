/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:41:11 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/06 17:33:27 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (s[i] != (char)c && i)
		i--;
	if (i == 0 && s[i] != (char)c)
		return (0);
	return ((char *)(s + i));
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
	char s[] = "dskjh fjjk lko kki ne kd";
	printf("%s\n", ft_strrchr(s,'k'));
	printf("%s", strrchr(s,'k'))*/