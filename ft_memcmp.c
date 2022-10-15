/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:17:07 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:18:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((char *)s1)[i] != '\0' || ((char *)s2)[i]) && i < n)
	{
		if (((char *)s1)[i] > ((char *)s2)[i])
			return (1);
		else if (((char *)s1)[i] < ((char *)s2)[i])
			return (-1);
		i++;
	}
	return (0);
}

int main(void)
{
    char s1[] = "hello";
    char s2[] = "hello";

    printf("%d\n", memcmp(s1, s2, 8));
    printf("%d", ft_memcmp(s1, s2, 8));
    return (0);
}
