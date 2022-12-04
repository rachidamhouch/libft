/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:56:26 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/10 02:34:49 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*ptr;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ptr = malloc(ls1 + ls2 + 1);
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, ls1);
	ft_memcpy(ptr + ls1, s2, ls2);
	ptr[ls1 + ls2] = '\0';
	return (ptr);
}
