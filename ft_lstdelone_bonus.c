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
	t_list	*ptr;

	if (!lst || !del)
		return ;
	ptr = lst;
	ptr->next = lst;
	lst = NULL;
	del(ptr->content);
	free(ptr);
}

// int	main(void)
// {
// 	t_list	*head;
// 	head = malloc(sizeof(t_list));
// 	head = ft_lstnew("hello");
// 	printf("%s\n", head->content);
// 	ft_lstdelone(head, func);
// 	//printf("%p", head);
// }