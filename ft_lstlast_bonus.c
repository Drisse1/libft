/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:46:21 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/20 13:46:23 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		if (lst->next == NULL)
		{
			ptr = lst;
		}
		lst = lst->next;
	}

	return (ptr);
}

// int	main(void)
// {
// 	t_list	*head = NULL;
// 	// t_list	*first, *second, *third;
// 	t_list	*new;
// 	//int		count;
// 	// head = malloc(sizeof(t_list));
// 	// first = malloc(sizeof(t_list));
// 	// second = malloc(sizeof(t_list));
// 	// third = malloc(sizeof(t_list));
// 	// new = malloc(sizeof(t_list));
// 	// head->content = "hello";
// 	// first->content = "hayhay";
// 	// second->content = "hiyhiy";
// 	// third->content = "hoyhoy";
// 	// head->next = NULL;
// 	// first->next = second;
// 	// second->next = third;
// 	// third->next = NULL;
// 	//count = ft_lstsize(head);
// 	new = ft_lstlast(head);
// 	//printf("%s", new->content);
// 	printf("third address: %p  | new address:  %p", head, new);
// }