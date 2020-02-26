/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:18:07 by clesaffr          #+#    #+#             */
/*   Updated: 2019/11/15 18:21:39 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *src, int x, size_t n)
{
	unsigned char *ptr;

	ptr = src;
	while (n--)
	{
		*ptr++ = (unsigned char)x;
	}
	return (src);
}
