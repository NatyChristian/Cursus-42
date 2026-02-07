/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:06:07 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 15:36:40 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main(void)
// {
//     t_list  *maillon;
//     char    *my_data;

//     my_data = "MBOLANANTENAINA Jean Philippe Christian";
//     maillon = ft_listnew(my_data);

//     if (!maillon)
//     {
//         printf("L'allocation de memoire pour le maillon a echoue");
//         return (1);
//     }
//     printf("L'addresse memoire du maillon est %p\n", maillon);
//     printf("Le contenu du maillon est %s\n", (char *)(maillon -> content));
//     printf("Le next address est %p\n", maillon -> next);
//     free(maillon);
//     return (0);
// }
