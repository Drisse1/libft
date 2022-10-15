/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:13:21 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:13:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = 1;
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = '1';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = 'a';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = 'A';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = '/';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = ' ';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
    c = '\n';
    printf("%d ------ ", isdigit(c));
    printf("%d\n", ft_isdigit(c));
}*/
