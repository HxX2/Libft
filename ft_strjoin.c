/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:43:43 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 23:11:11 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (ptr);
}
// int main()
// {
// 	char	s1[] = "lorem ipsum ";
// 	char	s2[] = "dolor sit amet";
// 	char *ptr = ft_strjoin(s1, s2);
// 	printf("%s",ptr);
// }