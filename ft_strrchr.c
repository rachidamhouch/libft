/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:55:35 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/17 00:10:38 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*n;
	int		m;

	n = (char *)s;
	m = ft_strlen(n);
	if (!(char) c)
		return (n + m);
	while (*n)
		n++;
	n--;
	while (m != 0)
	{
		if (*n == (char) c)
			return (n);
		m--;
		n--;
	}
	return (NULL);
}
