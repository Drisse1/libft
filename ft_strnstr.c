/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:40:45 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:44:28 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i])
			j++;
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (0);
}

/*int main(void)
{

    char s1[] = "hello world";
    char f[] = " ";
    int n = 7;

    printf("%s\n", ft_strnstr(s1, f, n));
    printf("%s", strnstr(s1, f, n));
    return (0);
}*/
