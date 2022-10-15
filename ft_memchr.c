/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:15:22 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:16:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*int main(void)
{
    //char d[] = {'a', 'b', 'c', 'd', 't', 'l', 'm'};
    int d[256] = {1, 2, 3, 4, 5, 6, 7};

    int *p = ft_memchr(d, 256, 7);
    printf("%d\n", *p);
    char *p1 = ft_memchr(d, 't', 5);
    printf("%s", p1);
    return (0);
}*/
