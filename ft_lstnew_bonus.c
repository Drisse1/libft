/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:01:39 by del-yaag          #+#    #+#             */
/*   Updated: 2022/10/19 16:01:41 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}

// int main(void)
// {
// 	t_list	*head;

// 	head = ft_lstnew("hello");
// 	printf("%s\n", head->content);
// 	printf("%p", head->next);
// 	return (0);
// }