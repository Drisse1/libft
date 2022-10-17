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
	if (!big && !len)
		return (0);
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (!little[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char *s1 = "A";
	//char *f = "";
	int n = ft_strlen(s1) + 1;
	//printf("%s\n", ft_strnstr(s1, ((void *)0), 3));
	printf("%s", ft_strnstr(s1, s1, n));
	return (0);
}*/
