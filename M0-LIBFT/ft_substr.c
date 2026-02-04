/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:18:58 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 12:04:53 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char	*s ="MBOLANANTENAINA";
	char 	*d = ft_substr(s,10,5);

	int i = 0;
	while (s[i] != '\0')
	{
		printf("%d : %c\n",i , s[i]);
		i++;
	}
	printf("%s\n", d);
	return (0);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > (unsigned int)s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = (unsigned int)s_len - start;
	i = 0;
	ptr = (char *)ft_calloc(sizeof(char), len + 1);
	if (!ptr)
		return (NULL);
	while (s[start] != '\0' && i < len)
		ptr[i++] = s[start++];
	return (ptr);
}
