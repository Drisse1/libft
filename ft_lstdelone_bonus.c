/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:38:34 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/21 11:38:36 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	func(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*ptr;
// 	t_list	*head;

// 	// first = malloc(sizeof(t_list));
// 	// second = malloc(sizeof(t_list));
// 	// third = malloc(sizeof(t_list));
// 	// first->content = ft_strdup("test2");
// 	// second->content = ft_strdup("test3");
// 	// third->content = ft_strdup("test4");
// 	// head = first;
// 	// first->next = second;
// 	// second->next = third;
// 	// third->next = NULL;
// 	first = ft_lstnew(ft_strdup("1"));
// 	second = ft_lstnew(ft_strdup("2"));
// 	third = ft_lstnew(ft_strdup("3"));
// 	head = first;
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	ptr = first;
// 	ft_lstdelone(second, func);
// 	second->next = NULL;
// 	head->next = third;
// 	while (ptr)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}
// 	return (0);
// }

// beforefirst->		->second->third->