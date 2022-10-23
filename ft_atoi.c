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

// static size_t	ft_minmax(size_t res, int sign)
// {
// 	if (res > 9223372036854775807 && sign == 1)
// 		res = -1;
// 	else if (res > 9223372036854775807 && sign == -1)
// 		res = 0;
// 	return (res);
// }

// int	ft_atoi(const char *str)
// {
// 	size_t	i;
// 	size_t	res;
// 	int		sign;

// 	i = 0;
// 	sign = 1;
// 	res = 0;
// 	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
// 		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		res = res * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	res = ft_minmax(res, sign);
// 	return (res * sign);
// }

static int	ft_calculater(const char *str, int i, int sign)
{
	size_t	res;
	size_t	old;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		old = res;
		res *= 10;
		if ((res / 10) != old && sign == 1)
			return (-1);
		if ((res / 10) != old && sign == -1)
			return (0);
		res += (str[i] - 48);
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (ft_calculater(str, i, sign));
}
// int	main(void)
// {
// 	char str[] = "1";
// 	// char buff[0xF0];
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }