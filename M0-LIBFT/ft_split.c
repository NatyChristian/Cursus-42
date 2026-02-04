/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jmbolana <jmbolana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:18:08 by Jmbolana          #+#    #+#             */
/*   Updated: 2026/02/04 13:09:58 by Jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*#include    <stdio.h>
*/
size_t	count_wrds(char const *s, char c);
size_t	cnt_tok(char const *s, char c);
void	*free_mem(char **s, int size);
/*
int main(void)
{
	char	**str;
	char	*s;
	char	c;
	size_t	i;

	s = "MBOLANANTENAINA--Jean_PHILIPPE--CHRISTIAN----";
	c = '-';
	str = ft_split(s,c);
	i = 0;
	while (i < count_wrds(s,c))
	{
		printf("[%zu] : %s\n", i + 1, str[i]);
		i++;
	}
	return (0);
}*/

char	**ft_split(char const *s, char c)
{
	size_t	wrds;
	char	**tab;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	wrds = count_wrds(s, c);
	tab = ft_calloc(sizeof(char *), wrds + 1);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wrds)
	{
		while (s[j] == c)
			j++;
		tab[i] = ft_substr(s, (unsigned int)j, cnt_tok(&s[j], c));
		if (!tab[i])
			return (free_mem(tab, (int)i));
		i++;
		j += cnt_tok(&s[j], c);
	}
	return (tab);
}

size_t	count_wrds(char const *s, char c)
{
	size_t	count;
	int		trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

size_t	cnt_tok(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	while (s[i] == c)
		i++;
	cnt = 0;
	while (s[i] && s[i] != c)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

void	*free_mem(char **s, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(s[i++]);
	free(s);
	return (NULL);
}
