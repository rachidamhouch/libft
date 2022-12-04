/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:35:01 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/21 00:00:06 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	n;

	n = count * size;
	if (count > 0 && size >= SIZE_MAX / count)
		return (NULL);
	p = malloc(n);
	if (!p)
		return (0);
	ft_memset(p, 0, n);
	return (p);
}
