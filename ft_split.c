/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlafou <zlafou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:55:38 by zlafou            #+#    #+#             */
/*   Updated: 2021/11/18 22:24:21 by zlafou           ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**p;
	int		wstart;

	i = 0;
	j = -1;
	p = malloc((ft_wcntr(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			wstart = ++i;
		while (s[i] != c && s[i])
			i++;
		if (j <= ft_wcntr(s, c) && (i - wstart) > 0)
			p[++j] = ft_substr(s, wstart, (i - wstart));
		// if (!p[j])
			// return (ft_wipe);
	}
	p[j + 1] = NULL;
	// ft_wipe(p);
	return (p);
}

// int main()
// {
// 	char const str[] = "hlk   k hh hh h";
// 	char c = ' ';
// 	char **p;

// 	p = ft_split(str, c);
// 	for (size_t i = 0; i < ft_wcntr(str, c); i++)
// 	{
// 		printf("%s\n", p[i]);
// 	}	
// }