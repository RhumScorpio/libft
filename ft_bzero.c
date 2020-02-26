/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:13:33 by clesaffr          #+#    #+#             */
/*   Updated: 2020/02/21 18:04:42 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *src, int n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)src;
	while (n--)
	{
		*ptr++ = (unsigned char)0;
	}
	return (src);
}
