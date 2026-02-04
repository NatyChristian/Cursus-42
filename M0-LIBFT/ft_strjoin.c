/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:32:40 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 12:08:04 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	main(void)
{
	char *s1 = "Raharinjatovo ";
	char *s2 = "Naelly Mirindah";
	char *join = ft_strjoin(s1, s2);

	printf("%s\n",join);
	free(join);
	join = NULL;
	return (0);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = ft_calloc(sizeof(char), len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[j++] = s2[i++];
	}
	return (ptr);
}
