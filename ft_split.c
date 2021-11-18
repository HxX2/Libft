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

// char **ft_split(char const *s, char c);

int main()
{
	char const str[] = "lkl  kkh  hklfh  fhklk    lkhfj";
	char c = ' ';

	printf("%d", ft_wcntr(str, c));
}