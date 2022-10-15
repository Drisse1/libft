/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:36:44 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:37:28 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
    char str[] = "hello";
    printf("%zu ---- ", strlen(str));
    printf("%zu\n", ft_strlen(str));

    char str1[] = "he\0llo";
    printf("%zu ---- ", strlen(str1));
    printf("%zu\n", ft_strlen(str1));

    char str2[] = "";
    printf("%zu ---- ", strlen(str2));
    printf("%zu\n", ft_strlen(str2));

    char str3[] = "\0";
    printf("%zu ---- ", strlen(str3));
    printf("%zu\n", ft_strlen(str3));
}*/
