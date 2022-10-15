/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:25:56 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:28:10 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (c == '\0')
	{
		s = "\0";
		return ((char *)s);
	}
	return (0);
}

/*int main(void)
{
    char s[] = "hello";
    char *c1;
    char *c2;

    c1 = strchr(s, 'e');
    c2 = ft_strchr(s, 'e');
    printf("%c\n", *(c1 + 1));
    printf("%c\n", *(c2 + 1));
}*/
