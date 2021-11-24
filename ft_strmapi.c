/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:28:29 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 20:38:12 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_toupperr(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	i = -1;
	while (p[++i])
		p[i] = f(i, p[i]);
	return (p);
}
// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "helloman";

// 	printf("%s", ft_strmapi(s, &ft_toupperr));
// }
