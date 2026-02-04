/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:05:25 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 10:32:25 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
int	main(void)
{
	char a[10] = "aaaaaaaaaa";
	printf("%s\n", a);
	ft_bzero(a, 10);
	printf("%s--\n", a);
	ft_memset(a, 'c',10);
	printf("%s", a);
	return (0);
}
*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = 0;
}
