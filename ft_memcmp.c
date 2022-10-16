/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:17:07 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:18:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while (i < n)
	{
		if (str1[i] > str2[i] || str1[i] < str2[i])
			return (str1[i] - str2[i]);
			/*return (1);
		else if (str1[i] < str2[i])
			return (-1);*/
		i++;
	}
	return (0);
}

/*int main(void)
{
    char s1[] = "hello";
    char s2[] = "hello";

    printf("%d\n", memcmp(s1, s2, 8));
    printf("%d", ft_memcmp(s1, s2, 8));
    return (0);
}*/
