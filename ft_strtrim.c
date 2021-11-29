/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:15:15 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 23:30:38 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s;
	int		e;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(s1);
	while (ft_strchr(set, s1[s]) && s1[s])
		s++;
	while (ft_strchr(set, s1[e]) && e)
		e--;
	if (s > e)
		return (ft_strdup(""));
	return (ft_substr(s1, s, e + 1 - s));
}
// #include <stdio.h>
// int main()
// {
// 	char *s1 = "    g  ";
// 	char *set = " ";
// 	char *p = ft_strtrim(s1, set);
// 	printf("%s", p);
// 	free(p);
// }
