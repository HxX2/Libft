/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:55:38 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/24 17:23:13 by zlafou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_wcntr(char const *s, char c)
{
	int	i;
	int	nw;

	i = 0;
	nw = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nw++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nw);
}

char	**ft_wipe(char **p, size_t j)
{
	size_t	i;

	i = 0;
	if (!*p)
		return (NULL);
	while (i < j)
		free(p[i++]);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**p;
	int		wstart;

	i = 0;
	j = 0;
	wstart = 0;
	if (!s)
		return (NULL);
	p = malloc((ft_wcntr(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[i] && j < ft_wcntr(s, c))
	{
		while (s[i] == c)
			wstart = ++i;
		while (s[i] != c && s[i])
			i++;
		p[j] = ft_substr(s, wstart, (i - wstart));
		if (!p[j++])
			return (ft_wipe(p, j - 1));
	}
	p[j] = NULL;
	return (p);
}

// int main()
// {
// 	char const str[] = "           gdgdgdgdg";
// 	char c = ' ';
// 	char **p;
// 	p = ft_split(str, c);
// 	// if (!p)
// 	// 	printf("allocation failed\n");
// 	size_t i =0;
// 	while (p[i])
// 		printf("%s\n", p[i++]);
// 	//system("leaks a.out");
// }