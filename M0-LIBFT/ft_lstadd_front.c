/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:23:22 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 15:54:50 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;	
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

// 	t_list *lst = NULL;

// 	t_list *node1 = ft_lstnew(&value1);
// 	t_list *node2 = ft_lstnew(&value2);

// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);

// 	printf("Linked List after adding elements to the front:\n");
// 	print_list(lst);

// 	free(node1);
// 	free(node2);

// 	return (0);
// }