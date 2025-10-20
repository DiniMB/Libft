/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:41:30 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/17 17:07:05 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *src1;
	unsigned char *dst1;

	src1 = src;
	dst1 = dst;
	i = 0;
	while (n > 0)
	{
		dst1[i] = src1[i];
		i++;
		n--;
	}
	return dst;
}
