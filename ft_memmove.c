/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:21:49 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:23:49 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	(char *)dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
    int i;
    char s[] = "abcdefghijklmn";
    char s1[] = "abcdefghijklmn";
    //char d[7] = "abc";

    i = sizeof(s) - 1;
    ft_memmove(s + 2, s, 6);
    printf(":%s:\n", s);
    memmove(s1 + 2, s1, 6);
    printf(":%s:\n", s1);
    printf(":%i:\n", i);
    return (0);
}*/
