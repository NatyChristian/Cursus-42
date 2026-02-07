/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 16:44:14 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 17:05:38 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_nodes;

	if (!lst || !f)
		return ;
	current_nodes = lst;
	while (current_nodes)
	{
		f(current_nodes -> content);
		current_nodes = current_nodes -> next;
	}
}

// static void	print_node(char *c)
// {
// 		printf("%c \n", *c);
// }

// int	main(void)
// {
// 	char value1 = 'a';
// 	char value2 = 'b';
// 	char value3 = 'c';
// 	char value4 = 'd';
// 	char value5 = 'e';
// 	char value6 = 'f';
// 	char value7 = 'g';
// 	char value8 = 'h';
// 	char value9 = 'i';

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

// 	printf("Les compositions de cette liste sont : \n");
// 	ft_lstiter(lst, (void *)print_node);
// 	return (0);
// }