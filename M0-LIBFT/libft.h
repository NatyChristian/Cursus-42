/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 11:20:37 by jmbolana          #+#    #+#             */
/*   Updated: 2026/01/29 19:49:26 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
void		*ft_memchr(const void	*s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_isdigit(int c);
int			ft_atoi(const char *nptr);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
