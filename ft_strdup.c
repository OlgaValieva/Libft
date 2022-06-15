/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:17:53 by carys             #+#    #+#             */
/*   Updated: 2021/10/26 21:17:56 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(s);
	copy = malloc(sizeof(char) * (n + 1));
	if (copy == NULL)
		return (NULL);
	if (n == 0)
	{
		copy[0] = '\0';
		return (copy);
	}
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
