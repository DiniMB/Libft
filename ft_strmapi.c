/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:37:23 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/22 15:07:28 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*split;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	split = malloc(sizeof(char) * (len + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < len)
	{
		split[i] = f(i, s[i]);
		i++;
	}
	split[i] = '\0';
	return (split);
}
