/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:08:08 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:10:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = 1;
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = '1';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = 'a';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = 'A';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = '/';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = ' ';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
    c = '\n';
    printf("%d ------ ", isalnum(c));
    printf("%d\n", ft_isalnum(c));
}*/
