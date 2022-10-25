/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:56 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:46:54 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	if ((char)c == '\0')
		return ((char *)s1 + ft_strlen(s1));
	while (s1[i])
		i++;
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i--;
	}
	return (0);
}
