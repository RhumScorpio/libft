/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnlstrjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:26:15 by clesaffr          #+#    #+#             */
/*   Updated: 2022/08/30 22:27:47 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_gnlstrjoin(const char *s1, const char *s2)
{
	int				i;
	int				j;
	char			*p;
	unsigned int	size;

	if (!s1 && s2)
		return (ft_strdup(s2));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(size * sizeof(*p));
	if (!p)
		return (NULL);
	i = -1;
	while (i++ < ft_strlen(s1))
		p[i] = s1[i];
	j = i - 1;
	i = -1;
	while (i++ < ft_strlen(s2))
		p[j + i] = s2[i];
	p[j + i + 1] = '\0';
	return (p);
}
