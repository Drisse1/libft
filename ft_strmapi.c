/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:24:48 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/16 11:24:51 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	func(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (0);
	i = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = 0;
	return (str);
}

// int main(void)
// {
// /* 	const char	*s;
// 	char		(*p)(unsigned int, char);
// 	char		*str; */

// /* 	s = "aaaaaaaaa";
// 	p = func2; */
// /* 	str = ft_strmapi(s, p);
//  */	printf("%s", ft_strmapi("srthvdiknv", NULL));
// 	//free(str);
// 	return (0);
// }
