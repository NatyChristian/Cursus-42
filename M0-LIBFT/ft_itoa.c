/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:11:31 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 13:21:24 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static size_t	countchar(int i);

char	*ft_itoa(int i)
{
	char	*temp;
	size_t	int_size;
	int		itemp;

	if (i == 0)
		return ("0");
	if (i == INT_MIN)
		return (ft_strdup("-2147483648"));
	int_size = countchar(i);
	itemp = i;
	if (i < 0)
		i *= -1;
	temp = ft_calloc(sizeof(char), int_size + 1);
	while (int_size - 1 > 0)
	{
		temp[int_size - 1] = '0' + i % 10;
		i /= 10;
		int_size--;
	}
	if (itemp < 0)
		temp[--int_size] = '-';
	else
		temp[--int_size] = '0' + i;
	return (temp);
}

static size_t	countchar(int i)
{
	size_t	count;

	if (i == INT_MIN)
		return (11);
	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i / 10 > 0)
	{
		count++;
		i /= 10;
	}
	return (++count);
}
/*
int	main(void)
{
	int	i;

	i = -2147483648LL;
	printf("The string version of %d is %s\n", i, ft_itoa(i));
	return (0);
}*/