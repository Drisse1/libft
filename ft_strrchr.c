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
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
	{
		s = "\0";
		return ((char *)s);
	}
	return (0);
}

int main(void)
{
    char s[] = "hellllloey";
    char *c1;
    char *c2;

    c1 = strrchr(s, '\0');
    c2 = ft_strrchr(s, '\0');
    printf("%s\n", c1);
    printf("%s\n", c2);
}
