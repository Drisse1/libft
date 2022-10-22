/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:56:23 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/21 11:56:25 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	func(void *content)
// {
// 	free(content);
// }
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (*lst)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*ptr;
// 	t_list	*head;
// 	first = ft_lstnew(ft_strdup("1"));
// 	second = ft_lstnew(ft_strdup("2"));
// 	third = ft_lstnew(ft_strdup("3"));
// 	head = first;
// 	first->next = second;
// 	second->next = third;
// 	third->next = NULL;
// 	ptr = first;
// 	ft_lstclear(&head, func);
// 	// second->next = NULL;
// 	// head->next = third;
// 	// printf("%p\n", *lst);
// 	printf("%p", head->content);
// 	return (0);
// }