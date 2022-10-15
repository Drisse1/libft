/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:45:38 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/12 17:45:41 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int    count(long n)
{
    int    i;

    i = 0;
    if (n < 0)
    {
      n *= -1;
      i++;
    }
    while (n > 10)
    {
        n /= 10;
        i++;
    }
    return (i);
}

static void ft_handler(long n, char *p, int c)
{
  if (n < 0)
    {
        n *= -1;
        p[0] = '-';
    }
    while (n > 9)
    {
        p[c--] = (n % 10) + 48;
        n /= 10;
    }
    if (n < 10)
      p[c] = (n % 10) + 48;
}

char    *ft_itoa(int n)
{
    long      n1;
    int        c;
    char    *p;

    n1 = (long)n;
    c = count(n1);
    p = malloc(sizeof(char) * (c + 2));
    if (!p)
        return (0);
    p[c + 1] = '\0';
    ft_handler(n1, p, c);
    return (p);
}

int    main(void)
{
    char *p = ft_itoa(4294967296);
    printf("%s", p);
    free(p);
    return (0);
}


// static int	count(int n)
// {
// 	int	i;

// 	i = 0;
// 	while (n > 10)
// 	{
// 		n /= 10;
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strrev(char *str)
// {
// 	int	len;
// 	int	i;
// 	char	tmp;

// 	len = 0;
// 	i = 0;
// 	while (str[len])
// 		len++;
// 	len -= 1;
// 	while (i < len)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len];
// 		str[len] = tmp;
// 		i++;
// 		len--;
// 	}
// 	// str[i] = '\0';
// 	return (str);
// }

// char	*ft_itoa(int n)
// {
// 	int		i;
// 	int		c;
// 	int		f;
// 	int		m;
// 	char	*p;
// 	char	*p1;

// 	i = 0;
// 	f = 0;
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		f = 1;
// 	}
// 	c = count(n) + 1;
// 	if (f == 1)
// 	{
// 		p = malloc(sizeof(char) * (c + 2));
// 		if (!p)
// 			return (0);
// 		while (n > 9)
// 		{
// 			m = n % 10;
// 			n /= 10;
// 			p[i] = m + 48;
// 			i++;
// 		}
// 		if (n < 10)
// 		{
// 			m = n % 10;
// 			p[i] = m + 48;
// 		}
// 		i++;
// 		p[i] = '-';
// 		i++;
// 		p[i] = '\0';
// 		p1 = ft_strrev(p);
// 	}
// 	else
// 	{
// 		p = malloc(sizeof(char) * (c + 1));
// 		if (!p)
// 			return (0);
// 		while (n > 9)
// 		{
// 			m = n % 10;
// 			n /= 10;
// 			p[i] = m + 48;
// 			i++;
// 		}
// 		if (n < 10)
// 		{
// 			m = n % 10;
// 			p[i] = m + 48;
// 		}
// 		i++;
// 		p[i] = '\0';
// 		p1 = ft_strrev(p);
// 	}
// 	return (p1);
// }

// int	main(void)
// {
// 	char *p = ft_itoa(-123);
// 	printf("%s", p);
// 	free(p);
// 	return (0);
// }