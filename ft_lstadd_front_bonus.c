/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:12:53 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/19 19:12:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*new;
	head = malloc(sizeof(t_list));
	first = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	printf("head address: %p\n", head);
	head->content = "hello";
	head->next = first;
	printf("head address: %p\n", head->next);
	first->content = "world";
	first->next = second;
	printf("first address: %p\n", first->next);
	second->content = "sir awa sir";
	second->next = NULL;
	// printf("second address: %p\n", second->next);
	ft_lstadd_front(&head, new);
	printf("new address: %p\n", new->next);
}*/