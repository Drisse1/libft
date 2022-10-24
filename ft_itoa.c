/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:45:38 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/24 16:28:47 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	if (n >= 0 && n < 10)
		i++;
	return (i);
}

static void	ft_handler(long n, char *p, int c)
{
	p[c] = '\0';
	if (n < 0)
	{
		n *= -1;
		p[0] = '-';
	}
	while (n > 9)
	{
		p[--c] = (n % 10) + 48;
		n /= 10;
	}
	if (n < 10)
		p[--c] = (n % 10) + 48;
}

char	*ft_itoa(int n)
{
	long	n1;
	int		c;
	char	*p;

	n1 = (long)n;
	c = count(n1);
	p = malloc(sizeof(char) * (c + 1));
	if (!p)
		return (0);
	ft_handler(n1, p, c);
	return (p);
}
