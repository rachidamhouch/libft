/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:44:32 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/08 16:09:30 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	ptr = malloc(len + 1);
	if (!ptr)
		return (ptr);
	len = 0;
	while (s1[len])
	{
		ptr[len] = s1[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
