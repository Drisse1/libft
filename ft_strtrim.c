/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:03:14 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/10 21:01:39 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_checklast(char const *s, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (set[i])
	{
		if (s[j] == set[i])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_checkbeg(char const *s, char const *set)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (set[i])
	{
		if (s[z] == set[i])
		{
			z++;
			i = 0;
		}
		else
			i++;
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	z;
	char	*p;

	i = 0;
	z = ft_checkbeg(s1, set);
	j = ft_checklast(s1, set);
	p = malloc(sizeof(char) * ((j - z) + 2));
	if (!p)
		return (0);
	while (z <= j)
	{
		p[i] = s1[z];
		z++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
