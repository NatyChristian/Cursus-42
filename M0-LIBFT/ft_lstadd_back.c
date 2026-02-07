/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:06:11 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 16:17:42 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current_node = *lst;
		while (current_node)
		{
			if (current_node -> next == NULL)
			{
				current_node -> next = new;
				return ;
			}
			current_node = current_node -> next;
		}
	}
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
// 	int value1 = 42;
// 	int value2 = 99;
// 	int value3 = 1;
// 	int value4 = 4;
// 	int value5 = 9;
// 	int value6 = 10;
// 	int value7 = 909;
// 	int value8 = 467;
// 	int value9 = 8942;

// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(&value1);
// 	t_list *node2 = ft_lstnew(&value2);
// 	t_list *node3 = ft_lstnew(&value3);
// 	t_list *node4 = ft_lstnew(&value4);
// 	t_list *node5 = ft_lstnew(&value5);
// 	t_list *node6 = ft_lstnew(&value6);
// 	t_list *node7 = ft_lstnew(&value7);
// 	t_list *node8 = ft_lstnew(&value8);
// 	t_list *node9 = ft_lstnew(&value9);

// 	ft_lstadd_front(&lst, node9);
// 	ft_lstadd_front(&lst, node8);
// 	ft_lstadd_front(&lst, node7);
// 	ft_lstadd_front(&lst, node6);
// 	ft_lstadd_front(&lst, node5);
// 	ft_lstadd_front(&lst, node4);
// 	ft_lstadd_front(&lst, node3);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_back(&lst, node1);

// 	printf("Linked List after adding elements to the front:\n");
// 	print_list(lst);

// 	printf("The last list is: \n");
// 	print_list(ft_lstlast(lst));
// 	free(node1);
// 	free(node2);

// 	return (0);
// }