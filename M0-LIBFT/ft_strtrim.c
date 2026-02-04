/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:49:26 by jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 12:16:19 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>
*/
static unsigned int	isin(char const ch, char const *s);

/*int	main(void)
{
	char	*s1;
	char	*set;
	char	*s;

	s1 = "MBOLANANTENAINA";
	set = "MBAN";
	s = ft_strtrim(s1, set);
	printf("%s\n", s);
	return (0);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*out;
	unsigned int	start;
	unsigned int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (isin(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (isin(s1[end - 1], set)
		&& end > start
		&& end > 0)
		end--;
	out = ft_calloc(sizeof(char), end - start + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, &s1[start], end - start + 1);
	return (out);
}

static unsigned int	isin(char const ch, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ch)
			return (1);
		i++;
	}
	return (0);
}
