/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:33:45 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:36:26 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
    char src[] = "hello world";
    //char dest[8] = "";
    printf("%zu ---- \n", ft_strlcpy(src + 3, src, 6));
    printf("%s\n", src);

    char src1[] = "hello world";
    char dest1[] = "";
    printf("%zu\n", ft_strlcpy(dest1, src1, 7));
    printf("%s\n", dest1);
    // char src1[20] = "hello world";
    // // char src2[] = "hello world";
    // // char dest1[11] = "";
    // printf("{%c}\n", src1[4]);
    // memmove(&src1[3], src1, 6);
    // printf("{%s}\n", src1);
}*/
