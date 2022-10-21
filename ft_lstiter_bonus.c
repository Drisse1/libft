/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:58:05 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/21 18:58:06 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	func(void *content)
{
	content = "hhhh";
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	f(lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	// t_list	*first, *second, *third;
// 	// t_list	*new;

// 	head = malloc(sizeof(t_list));
// 	// first = malloc(sizeof(t_list));
// 	// second = malloc(sizeof(t_list));
// 	// third = malloc(sizeof(t_list));
// 	// new = malloc(sizeof(t_list));

// 	head->content = "hello";
// 	// first->content = "hayhay";
// 	// second->content = "hiyhiy";
// 	// third->content = "hoyhoy";
// 	// new->content = "hey";
// 	// head->next = first;
// 	// printf("%p\n", head);
// 	// first->next = second;
// 	// second->next = third;
// 	// third->next = new;
// 	head->next = NULL;
// 	ft_lstiter(head->content, func);
// 	// printf("%p\n", third->next);
// 	// printf("%p\n", new);
// 	printf("%s\n", head->content);
// 	// printf("%s\n", first->content);
// 	// printf("%s\n", second->content);
// 	// printf("%s\n", third->content);
// 	// printf("%s\n", new->content);
// 	return (0);
// }