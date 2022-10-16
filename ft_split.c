/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:59:48 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/12 15:58:11 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(const char *s, char c)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		j = 1;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (j == 1)
			{
				n++;
				j = 0;
			}
			i++;
		}
	}
	return (n);
}

// static	void	ft_free(char **str, int j)
// {
// 	int	i;

// 	i = -1;
// 	while (++i < j)
// 		free(str[i]);
// 	free(str);
// 	str = 0;
// }

static void	ft_handler(char const *s, char **str, char c, int start)
{
	int		j;
	int		i;
	int		finish;
	int		b;

	i = -1;
	j = 0;
	b = 0;
	finish = -1;
	while (s[++i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[b] != c && finish == -1 && s[b + 1] == c) ||  s[b + 1] == '\0')
			finish = b + 1;
		//if ((s[i] == c || s[i + 1] == '\0') && (i - 1 >= 0 && s[i - 1] != c))
		if (start != -1 && finish != -1)
		{
			/*if (s[i + 1] == '\0')
				b = i + 1;*/
			str[j++] = ft_substr(s, start, finish - start);
			start = -1;
			finish = -1;
		}
		b++;
	}
	str[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		start;

	if (!s)
		return (0);
	start = -1;
	str = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!str)
		return (0);
	ft_handler(s, str, c, start);
	return (str);
}

// int	main(void)
// {
// 	int		i;
// 	char	**str;

// 	char *s = "split  ||this|for|me|||||!|";
// 	i = -1;
// 	//printf("%d\n", ft_words_count(s, c));
// 	str = ft_split(s, '|');
// 	/*while (str[++i])
// 		printf(":%s:\n", str[i]);*/
// 	//while (1);
// 	printf(":%s:\n", str[0]);
// 	printf(":%s:\n", str[1]);
// 	printf(":%s:\n", str[2]);
// 	printf(":%s:\n", str[3]);
// 	printf(":%s:\n", str[4]);
// 	printf(":%s:\n", str[5]);
// 	printf(":%s:\n", str[6]);
// 	printf(":%s:\n", str[7]);
// 	free(str);
// 	return (0);
// }