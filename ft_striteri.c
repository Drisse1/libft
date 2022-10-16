/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:22:54 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/16 12:22:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func1(unsigned int i, char *s)
{
	while (*s)
	{
		s = (s + i);
		s++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	f(i, s);
}

/*int	main(void)
{
	char	*s;
	void	*p;

	s = "0000000000";
	p = func1;
	ft_striteri(s, p);
	printf("%s", s);
	return (0);
}*/
