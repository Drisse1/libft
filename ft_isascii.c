/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:12:16 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:12:53 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = -20;
    while (c < 128)
    {
        printf("%d ------ ", isascii(c));
        printf("%d\n", ft_isascii(c));
        c++;
    }
    c = '1';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
    c = 'a';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
    c = 'A';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
    c = '/';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
    c = ' ';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
    c = '\n';
    printf("%d ------ ", isascii(c));
    printf("%d\n", ft_isascii(c));
}*/
