/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:37:33 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/01 13:49:53 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>*/

static int	ft_isspace(const char c);

/*int	main(void)
{
	char	*c;
	int		d;

	c = "-2147483647";
	d = ft_atoi(c);
	printf("%d", d);
	return (0);
}
*/
int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				s;
	int				vals;

	i = 0;
	s = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] != '-' && nptr[i] != '+' && !ft_isdigit(nptr[i]))
		return (0);
	if (nptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		s = 1;
		i++;
	}
	vals = 0;
	while (nptr[i] && ft_isdigit(nptr[i]))
		vals = vals * 10 + nptr[i++] - '0';
	return (vals * s);
}

static int	ft_isspace(const char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
