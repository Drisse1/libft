/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:55:14 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/08 16:58:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_minmax(size_t res, int sign)
{
	if (res > 9223372036854775807 && sign == 1)
		res = -1;
	else if (res > 9223372036854775807 && sign == -1)
		res = 0;
	return (res);
}

int	ft_atoi(char *str)
{
	size_t	i;
	size_t	res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		i++;
		sign *= -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res = ft_minmax(res, sign);
	return (res * sign);
}

// int	main(void)
// {
// 	//char str[40] = "99999999999999999999999999";
// 	char buff[0xF0];

// 	printf("%d\n", atoi(buff));
// 	printf("%d\n", ft_atoi(buff));
// 	return (0);
// }
