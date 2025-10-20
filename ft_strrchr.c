/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:31:37 by dbaltaza          #+#    #+#             */
/*   Updated: 2025/10/17 17:34:09 by dbaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    char *last = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last = (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return (last);
}

