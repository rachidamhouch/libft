/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:20:20 by ramhouch          #+#    #+#             */
/*   Updated: 2022/10/09 16:25:42 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	ptr = ft_strdup(s);
	if (!ptr)
		return (0);
	while (ptr[i])
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
