/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:01:02 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:07:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*p;

	p = malloc(number * size);
	if (!p)
		return (0);
	if (size == SIZE_MAX || number == SIZE_MAX)
	{
		p = NULL;
		return (p);
	}
	ft_bzero(p, number * size);
	return (p);
}

/*int main(void)
{
    int i = -1;
    int *x = calloc(4, sizeof(int));
    int *y = calloc(4, sizeof(int));
    int *z = malloc(4 * sizeof(int));

    while (++i < 4)
        printf("%d- %d\n", i, *(x + i));
    i = -1;
    while (++i < 8)
        printf("%d", *(y + i));
    i = -1;
    while (++i < 4)
        printf("%d- %d\n", i, *(z + i));
	free(y);
    return (0);
}*/