/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:29:29 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/13 19:17:25 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	lenn;
	size_t	i;

	i = 0;
	lenn = 0;
	lenn = ft_strlen(needle);
	if (!lenn)
		return ((char *)haystack);
	if (!len)
		return (0);
	while (haystack[i] && i + lenn <= len)
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(haystack + i, needle, lenn) == 0)
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
