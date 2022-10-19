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
#include <stdio.h>

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

static	char	**ft_free(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free(str[i++]);
	free(str);
	return (NULL);
}

static char	**ft_handler(char const *s, char **str, char c, int start)
{
	int		j;
	int		i;
	int		finish;

	i = -1;
	j = 0;
	finish = -1;
	while (s[++i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] != c && finish == -1 && s[i + 1] == c) || s[i + 1] == '\0')
			finish = i + 1;
		if (start != -1 && finish != -1)
		{
			str[j] = ft_substr(s, start, finish - start);
			if (!str[j])
				return (ft_free(str, j));
			j++;
			start = -1;
			finish = -1;
		}
	}
	str[j] = NULL;
	return (str);
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
	return (ft_handler(s, str, c, start));
}

// int	main(void)
// {
//     const char *s = "hf dfuhsi sfhusfk hvdisuhgs";

//     //printf("%d\n", ft_word_count(s, ' '));
//     char **res = ft_split(s, ' ');

//     while (*res)
//     {
//         printf("%s\n", *res++);
//     }
// 	while (1)
// 	{
// 	}
//     return (0);
// }
	// str = 0;