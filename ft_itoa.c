/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:21:53 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 21:21:57 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		znak;
	char	*str;

	len = ft_len(n);
	znak = 1;
	if (n < 0)
		znak = -1;
	len = len + (n <= 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[len] = '\0';
	while (n != 0)
	{
		str[--len] = (char)((n % 10) * znak + '0');
		n = n / 10;
	}
	len--;
	if (znak < 0)
		str[len] = '-';
	return (str);
}
