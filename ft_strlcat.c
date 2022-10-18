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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	if (!dest && !size)
		return (ft_strlen(src) + size);
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

int	main(void)
{
	char src[0xF] = "nyan !";
	printf("%zu ", strlcat(((void *)0), src, 0));

    //char dest[50] = "hello";
    //printf(":%s:\n", dest);

    //char src1[0xF] = "nyan !";
    //char dest1[50] = "hello";
    //printf("%zu ", ft_strlcat(((void *)0), src1, 0));
    //printf(":%s:\n", dest1);
    return (0);
}
