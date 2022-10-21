/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:31:46 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/20 14:31:48 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!ptr)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(ptr);
	ptr->next = new;
}

// int	main(void)
// {
// 	// t_list	*first, *second, *third;
// 	//head = malloc(sizeof(t_list));
// 	// first = malloc(sizeof(t_list));
// 	// second = malloc(sizeof(t_list));
// 	// third = malloc(sizeof(t_list));
// 	//head->content = "hello";
// 	// first->content = "hayhay";
// 	// second->content = "hiyhiy";
// 	// third->content = "hoyhoy";
// 	// head->next = first;
// 	// first->next = second;
// 	// second->next = third;
// 	// third->next = NULL;
// 	// while (head != NULL)
// 	// {
// 	// 	printf("head address: %p\n", head);
// 	// 	printf("head content: %s\n", head->content);
// 	// 	head = head->next;
// 	// }
// 	// printf("%p\n", head->next);

// 	t_list	*head;
// 	t_list	*first, *second, *third;
// 	t_list	*new;

// 	head = malloc(sizeof(t_list));
// 	first = malloc(sizeof(t_list));
// 	second = malloc(sizeof(t_list));
// 	third = malloc(sizeof(t_list));
// 	new = malloc(sizeof(t_list));

// 	head->content = "hello";
// 	first->content = "hayhay";
// 	second->content = "hiyhiy";
// 	third->content = "hoyhoy";
// 	head->next = first;
// 	printf("%p\n", head);
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	new->content = "hey";
// 	new->next = NULL;
// 	ft_lstadd_back(&head, new);
// 	printf("%p\n", third->next);
// 	printf("%p\n", new);
// 	printf("%s\n", head->content);
// 	printf("%s\n", new->content);
// 	printf("%s\n", head->next->next->next->next->content);
// 	return (0);
// }