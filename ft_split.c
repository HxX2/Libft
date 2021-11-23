/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:55:38 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/23 04:14:29 by zlafou           ###   ########.fr       */
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
	int		it[2];
	char	**p;
	int		wstart;

	it[0] = 0;
	it[1] = -1;
	wstart = 0;
	if (!s)
		return (NULL);
	p = malloc((ft_wcntr(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[it[0]])
	{
		while (s[it[0]] == c)
			wstart = ++it[0];
		while (s[it[0]] != c && s[it[0]])
			it[0]++;
		if (it[1] <= ft_wcntr(s, c) && (it[0] - wstart) > 0)
			p[++it[1]] = ft_substr(s, wstart, (it[0] - wstart));
		if (!p[it[1]])
			return (ft_wipe(p, it[1]));
	}
	p[it[1] + 1] = NULL;
	return (p);
}

// int main()
// {
// 	char const str[] = "      split       this for   me  !       ";
// 	char c = ' ';
// 	char **p;
// 	p = ft_split(str, c);
// 	if (!p)
// 		printf("allocation failed\n");
// 	size_t i =0;
// 	while (p[i])
// 		printf("%s\n", p[i++]);
// 	system("leaks a.out");
// }