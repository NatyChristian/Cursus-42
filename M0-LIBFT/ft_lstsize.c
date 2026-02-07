/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:40:21 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 15:55:16 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i ++;
		lst = lst -> next;
	}
	return (i);
}

// void	print_lst(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%p -> ", (void *)lst);
// 		printf("%d\n", *(int *)(lst->content));
// 		lst = lst -> next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	int		content1 = 1;
// 	int		content2 = 2;	
// 	t_list *node1 = ft_lstnew(&content1);
// 	t_list *node2 = ft_lstnew(&content2);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);
// 	printf("Linked list: \n");
// 	print_lst(lst);
// 	printf("The size of the list is : %d\n", ft_lstsize(lst));
// 	free(node1);
// 	free(node2);
// 	return (0);
// }