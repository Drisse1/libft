/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:10:33 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:11:39 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main(void)
{
    int c = -10;
    while (c <= 127)
    {
        printf("%d ---- ", isalpha(c));
        printf("%d\n", ft_isalpha(c));
        c++;
    }
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = '1';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = 'a';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = 'A';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = '/';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = ' ';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
    c = '\n';
    printf("%d ------ ", isalpha(c));
    printf("%d\n", ft_isalpha(c));
}*/
