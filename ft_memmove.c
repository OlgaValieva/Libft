/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:08:09 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 20:27:27 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	const char		*serc;

	dest = (unsigned char *)dst;
	serc = (const char *)src;
	if (n == 0 || dst == src)
		return (dst);
	if (dst > src)
		while (n--)
			dest[n] = serc[n];
	else
		while (n--)
			*dest++ = *serc++;
	return (dst);
}
