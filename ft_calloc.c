/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:17:37 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 21:17:41 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	mem;
	void	*dest;

	mem = count * size;
	dest = (char *)malloc(mem);
	if (!dest)
		return (NULL);
	ft_bzero(dest, mem);
	return (dest);
}
