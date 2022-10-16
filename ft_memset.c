/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:24:19 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:25:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}

/*int main(void)
{
    int i;
    int b[10];

    i = 0;
    //memset(b, '2', sizeof(int) * 10);
    ft_memset(b, '9', sizeof(int) * 10);

    while (i < 10)
    {
        printf("%d", b[i]);
        i++;
    }
    return 0;
}*/
