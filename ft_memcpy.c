/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:19:08 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 17:21:20 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

int main(void)
{
    char s[20] = "abcdefgh";
    //char d[20] = "";
	//memcpy(s + 2, s, 6);
    //printf(":%s:\n", s); //memcpy (overlapping)
    // char s1[] = "\0";
    // char d1[20] = "\0";
	memcpy(s + 2, s, 6);
    printf(":%s:", s); //memcpy (overlapping)
    return (0);
}
