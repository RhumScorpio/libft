/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:52:12 by clesaffr          #+#    #+#             */
/*   Updated: 2020/02/24 23:17:16 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		k;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	k = 0;
	while (k < i)
	{
		str[k] = f(k, s[k]);
		k++;
	}
	str[k] = '\0';
	return (str);
}
