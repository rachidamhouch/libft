/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:35:06 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/15 02:26:03 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	lend = 0;
	lens = 0;
	if (dst)
		lend = ft_strlen(dst);
	i = 0;
	lens = ft_strlen(src);
	if (dstsize == 0 || dstsize <= lend)
		return (lens + dstsize);
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
