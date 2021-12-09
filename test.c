//libft tests

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

//----atoi----//

// int main(void)
// {
// 	char st[] = "-9223372036854775808";
// 	printf("%d\n",ft_atoi(st));
// 	printf("%d",atoi(st));
// }

//----lstaddback----//

// int main(void)
// {
// 	t_list *l = ((void *)0);
// 	t_list *n = ft_lstnew(ft_strdup("OK"));

// 	ft_lstadd_back(&l, n);
// }

//----lstlast----//

// int main(void)
// {
// 	t_list *list;
// 	t_list **head;
// 	int i = 1;

// 	head = &list;
//  	list = ft_lstnew(ft_strdup("0"));
// 	while (i <= 10)
// 	{
// 		ft_lstadd_front(head, ft_lstnew(ft_strdup(ft_itoa(i))));
// 		i++;
// 	}
// 	ft_lstadd_front(head, ft_lstnew(ft_strdup("the start")));
// 	ft_lstadd_back(head, ft_lstnew(ft_strdup("the end")));
// 	i = 0;
// 	while (i <= 12)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 		i++;
// 	}
// }

//----lstmap----//

// int main(void)
// {
// 	t_list **head;
// 	t_list	*node;
// 	t_list	*new;
// 	t_list	*tmp;
// 	t_list	*dup;
// 	int i = 1;

// 	head = &node;
// 	node = ft_lstnew(&i);
// 	tmp = node;
// 	while (i <= 20)
// 	{
// 		new = ft_lstnew(&i);
// 		//ft_lstadd_back(head, new);
// 		tmp->next = new;
// 		tmp = tmp->next;
// 		i++;
// 	}
// 	tmp = *head;
// 	dup = ft_lstmap(tmp,NULL,NULL);
// 	i = 1;
// 	while (i <= 20)
// 	{
// 		printf("%d\n", *(int *)(tmp->content));
// 		i++;
// 		if (dup)
// 			tmp = tmp->next;
// 	}
// 	return 0;
// }

//----lstnew----//

// int main()
// {
// 	int x = 6557;
// 	// i = malloc(sizeof(int) * 1);
// 	t_list *p;
// 	p = ft_lstnew(&x);
// 	//int z = (int)p->content;
// 	printf("%d", *(int *)p->content);
// }

//----memchr----//

// int main()
// {
// 	char s[] = "hh ffl kfsfh hel oo weor wrp";
// 	char c = 'o';
// 	printf("%s", (char *)ft_memchr(s, c, 23));
// }

//----memcmp----//

// int main()
// {
// 	int	a[] = {1, 2, 300, 4};
// 	int	b[] = {1, 2, 3, 4};
// 	44-2-0-0
// 	44-1-0-0
// 	printf("%d", ft_memcmp(a, b, 16));
// 	return (0);
// }

//----memcpy----//

// int main()
// {
// 	char src[20] = "abcdefgh";
// 	printf("%s\n", ft_memcpy(src+2, src, 6));
// 	// printf("%s", memcpy(null, null, 3));
// }

//----memmove----//

// int main()
// {
// 	char src[] = "abcdefgh";
// 	printf("%s\n", ft_memmove(src+2, src, 6));
// 	// printf("%s", memcpy(null, null, 3));
// }

//----memset----//

// int main()
// {
// 	int tab[6] = {1, 2, 2147483647, -2147483648, 0, -1};
// 	ft_memset(tab, 0, sizeof(tab));
// 	for (int i = 0; i < 6; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}
// }

//----split----//

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

//----strchr----//

// int main ()
// {
// 	char s[] = "dskjh fjjk lko kki neo kd";
// 	printf("%s\n", ft_strchr(s,'y'));
// 	printf("%s", strchr(s,'w'));
// }

//----strjoin----//

// int main()
// {
// 	char	s1[] = "lorem ipsum ";
// 	char	s2[] = "dolor sit amet";
// 	char *ptr = ft_strjoin(s1, s2);
// 	printf("%s",ptr);
// }

//----strlcat----//

// int main(void)
// {
// 	char dest[] = "fffff";
// 	char src[] = "ggggggggggg";

// 	ft_strlcat(NULL, src, 0);
// }

//----strmapi----//

// char	ft_toupperr(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

// int main(void)
// {
// 	char s[] = "helloman";
// 	printf("%s", ft_strmapi(s, &ft_toupperr));
// }

//----strnstr----//

// #include <stdio.h>
// int main()
// {
// 	char haystack[] = "aaabaabcd";
// 	char needle[] = "cd";
// 	printf("%s", ft_strnstr(haystack, needle, 8));
// }

//----strrchr----//

// int main ()
// {
// 	char s[] = "dskjh fjjk lko kki ne kd";
// 	printf("%s\n", ft_strrchr(s,'k'));
// 	printf("%s", strrchr(s,'k'))
// }

//----strtrim----//

// int main()
// {
// 	char *s1 = "    g  ";
// 	char *set = " ";
// 	char *p = ft_strtrim(s1, set);
// 	printf("%s", p);
// 	free(p);
// }