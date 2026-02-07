/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:19:36 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 16:28:55 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst && !del)
		return ;
	del(lst -> content);
	free(lst);
}

// static void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%p -> ", (void *)lst);
// 		printf("%d\n", *(int *)(lst->content));
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("1"));
// 	t_list *node2 = ft_lstnew(ft_strdup("2"));
// 	t_list *node3 = ft_lstnew(ft_strdup("3"));
// 	t_list *node4 = ft_lstnew(ft_strdup("4"));

// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);
// 	ft_lstadd_back(&lst, node4);

// 	printf("Avant suppression:\n");
// 	print_list(lst);

// 	node1->next = node2->next;
// 	ft_lstdelone(node2, free);

// 	printf("\nApres suppression:\n");
// 	print_list(lst);

// 	while (lst != NULL)
// 	{
// 		t_list *temp = lst;
// 		lst = lst->next;
// 		free(temp->content);
// 		free(temp);
// 	}
// 	return (0);
// }