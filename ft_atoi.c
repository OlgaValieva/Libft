/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:16:02 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 21:17:18 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	n;
	long int	nn;
	int			m;
	int			i;

	n = 0;
	m = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nn = n;
		n = n * 10 + (str[i++] - '0');
		if ((nn < 0 && n > 0) || (nn > 0 && n < 0))
			return ((m == 1) * (-1));
	}	
	return (n * m);
}
