/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:14:23 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:14:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = 32;
    while (c < 127)
    {
        printf("%d ------ ", isprint(c));
        printf("%d\n", ft_isprint(c));
        c++;
    }
    printf("------------------------\n");
    c = '1';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
    c = 'a';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
    c = 'A';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
    c = '/';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
    c = ' ';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
    c = '\n';
    printf("%d ------ ", isprint(c));
    printf("%d\n", ft_isprint(c));
}*/
