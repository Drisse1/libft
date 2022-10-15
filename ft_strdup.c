/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:28:31 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:30:34 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main(void)
{
    char *s = "hello world          ";
    // s[2] = 'w';

	char *mine = strdup(s);
    char *thiers = ft_strdup(s);

    printf(":%s:\n:%s:", mine,thiers);
    return (0);
}*/
