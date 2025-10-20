/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:30:10 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/20 15:44:54 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	j;
	char	*cpstr;

	i = 0;
	while (s[i])
		i++;
	cpstr = malloc(sizeof(char) * (i + 1));
	if (cpstr == NULL)
		return (NULL);
	else
	{
		j = 0;
		i = 0;
		while (s[i])
		{
			cpstr[j] = s[i];
			i++;
			j++;
		}
		cpstr[j] = '\0';
	}
	return (cpstr);
}
