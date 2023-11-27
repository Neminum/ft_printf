/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:01:47 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/24 17:26:36 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	char		*dstc;
// 	const char	*srccc;

// 	if ((dst == src) || n == 0)
// 		return (dst);
// 	if (!dst && !src)
// 		return (0);
// 	dstc = (char *)dst;
// 	srccc = (const char *)src;
// 	while (n--)
// 		dstc[n] = srccc[n];
// 	return (dst);
// }
