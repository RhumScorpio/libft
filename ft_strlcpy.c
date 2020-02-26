/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:54:10 by clesaffr          #+#    #+#             */
/*   Updated: 2020/02/22 11:32:57 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (n == 0)
		return (ft_strlen(src));
	while (*(src + i) != '\0' && i < (n - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
