/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:38:16 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 14:38:16 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// static char	ft_toupperv2(unsigned int i, char ch)
// {
// 	(void)i;
// 	return (ft_toupper(ch));
// }

// int	main(void)
// {
// 	char	*strstart = "mbolanantenaina jean philippe christian";
// 	char	*strdest;
// 	strdest = ft_strmapi(strstart, ft_toupperv2);
// 	printf("%s\n", strdest);
// 	return (0);
// }
