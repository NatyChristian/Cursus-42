/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:59:48 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/26 17:02:13 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	char a = 'A';

	while (a <= 'Z')
	{
		printf("%c : %c\n", a, ft_tolower(a));
		a++;
	}
	return (0);
}*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
