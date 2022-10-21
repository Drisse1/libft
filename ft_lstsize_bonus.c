/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:19:53 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/20 13:19:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (!lst)
		return (count);
	ptr = lst;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*head, *first, *second, *third;
// 	int		count;
// 	head = malloc(sizeof(t_list));
// 	first = malloc(sizeof(t_list));
// 	second = malloc(sizeof(t_list));
// 	third = malloc(sizeof(t_list));
// 	head->content = "hello";
// 	first->content = "hayhay";
// 	second->content = "hiyhiy";
// 	third->content = "hoyhoy";
// 	head->next = first;
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	count = ft_lstsize(head);
// 	printf("%d", count);
// }