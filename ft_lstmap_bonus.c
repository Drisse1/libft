/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:28:44 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/23 10:28:47 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*func(void *content)
// {
// 	int	i;

// 	i = 0;
// 	while (((char *)content)[i])
// 	{
// 		((char *)content)[i] = '5';
// 		i++;
// 	}

// 	return (content);
// }

// static void	del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// int	main(void)
// {
// 	t_list	*first;
// 	t_list	*second;
// 	t_list	*third;
// 	t_list	*ptr;
// 	t_list	*head;

// 	char strf[] = "hello";
// 	char strs[] = "world";
// 	char strt[] = "!";

// 	first = ft_lstnew(strf);
// 	second = ft_lstnew(strs);
// 	third = ft_lstnew(strt);

// 	head = first;

// 	head->next = second;
// 	second->next = third;
// 	third->next = NULL;

// 	ptr = head;
// 	while (ptr)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}
// 	ptr = head;

// 	ft_lstmap(head, func, del);

// 	while (ptr)
// 	{
// 		printf("%s\n", ptr->content);
// 		ptr = ptr->next;
// 	}
// 	while (1)
// 	{

// 	}
// 	return (0);
// }
