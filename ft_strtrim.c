/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:15:15 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/23 11:25:03 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	ptr = ft_substr(s1, i, j + 1 - i);
	if (!ptr)
		return (0);
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
// 	char *s1 = "aaaobboabboaboabbobbhelljkoooobaabab";
// 	char *set = "abo";
// 	printf("%s", ft_strtrim(s1, set));
// }
