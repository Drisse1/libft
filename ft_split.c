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

static	void	ft_free(char **str, int j)
{
	int	i;

	i = -1;
	while (++i < j)
		free(str[i]);
	free(str);
	str = 0;
}

static void	ft_handler(char const *s, char **str, char c, int start)
{
	int		j;
	int		i;

	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c && start == -1)
			start = i;
		if ((s[i] == c || s[i + 1] == '\0') &&
			(i - 1 >= 0 && s[i - 1] != c))
		{
			if (s[i + 1] == '\0')
				i++;
			str[j++] = ft_substr(s, start, i - start);
			if (str[j] == 0)
			{
				ft_free(str, j);
				return ;
			}
			start = -1;
		}
	}
	str[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		start;

	start = -1;
	str = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!str)
		return (0);
	ft_handler(s, str, c, start);
	return (str);
}