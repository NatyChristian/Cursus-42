/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:20:58 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/29 19:25:56 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char c = '!';
	int i = 0;

	while (i < 100)
	{
		printf("%c : %d\n", c, ft_isdigit(c));
		i++;
		c++;
	}
	return (0);
}*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
