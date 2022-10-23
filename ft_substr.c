/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:03:51 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/10 16:46:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_cpy(char *p, char const *s2, unsigned int start, size_t l)
{
	size_t	i;

	i = 0;
	if (!p)
		return (0);
	while (i < l)
	{
		p[i] = s2[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	x;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start <= ft_strlen(s))
	{
		x = ft_strlen(s) - start;
		if (len <= x)
		{
			p = malloc(sizeof(char) * len + 1);
			ft_cpy(p, s, start, len);
		}
		else
		{
			p = malloc(sizeof(char) * x + 1);
			ft_cpy(p, s, start, x);
		}
	}
	else
		p = (char *)ft_calloc(1, 1);
	return (p);
}