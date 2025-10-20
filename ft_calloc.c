/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:43:41 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/20 15:55:24 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*alloc;
	size_t			total;
	size_t			i;

	total = nmemb * size;
	alloc = (unsigned char *)malloc(total);
	if (alloc == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < total)
		{
			alloc[i] = 0;
			i++;
		}
	}
	return ((void *)alloc);
}
