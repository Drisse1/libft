/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:59:20 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:00:27 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*int main(void)
{
    char b[10];
    int i;

    i = 0;
    ft_bzero(b, sizeof(char) * 10);
    while ( i < 10)
    {
        printf("%d - %c\n", i, b[i]);
        i++;
    }
    printf("---------------\n");
    i = 0;
    bzero(b, sizeof(char) * 10);
    while (i < 10)
    {
        printf("%d - %c\n", i, b[i]);
        i++;
    }
    return (0);
}*/
