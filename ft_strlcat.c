/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:31:05 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:33:17 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = ft_strlen(dest);
	l = ft_strlen(src) + ft_strlen(dest);
	j = 0;
	if (size == 0 || size < i)
		return (ft_strlen(src) + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l);
}

/*int	main(void)
{
    char src[] = " World";
    char dest[50] = "hello";
    printf("%zu ", strlcat(dest, src, 0));
    printf(":%s:\n", dest);

    char src1[] = " World";
    char dest1[50] = "hello";
    printf("%zu ", ft_strlcat(dest1, src1, 0));
    printf(":%s:\n", dest1);
    return (0);
}*/