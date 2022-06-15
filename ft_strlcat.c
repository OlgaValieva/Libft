/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:38:12 by carys             #+#    #+#             */
/*   Updated: 2021/10/24 20:16:51 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (size + srclen);
	if ((size - dstlen) <= srclen)
	{
		ft_memcpy(dst + dstlen, src, size - 1);
		dst[size - 1] = 0;
	}
	else
		ft_memcpy(dst + dstlen, src, srclen + 1);
	return (dstlen + srclen);
}
