/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:02:17 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 20:26:19 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	const char		*serc;

	i = 0;
	dest = (unsigned char *)dst;
	serc = (const char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (i < n)
	{
		dest[i] = serc[i];
		i++;
	}
	return (dst);
}
