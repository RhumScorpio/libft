/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 09:33:49 by clesaffr          #+#    #+#             */
/*   Updated: 2020/02/22 15:51:40 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int chr)
{
	char	*str;

	str = (char *)p;
	while (*str != chr)
	{
		if (*str == '\0')
			return (NULL);
		++str;
	}
	return (str);
}
