/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:14:15 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/15 21:36:12 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] && i <= len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == 0)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	char haystack[] = "aaabaabcd";
// 	char needle[] = "cd";

// 	printf("%s", ft_strnstr(haystack, needle, 8));
// }