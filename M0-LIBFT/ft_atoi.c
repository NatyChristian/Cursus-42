/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:15:50 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/07 14:54:03 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	char *c = "+-54";

// 	int	d = ft_atoi(c);
// 	printf("%d", d);
// 	return (0);
// }

int	ft_atoi(const char *nptr)
{
	int	s;
	int	vals;
	int	i;

	s = 1;
	i = 0;
	vals = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13)
		|| nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		vals = vals * 10 + nptr[i] - '0';
		i++;
	}
	return (vals * s);
}
