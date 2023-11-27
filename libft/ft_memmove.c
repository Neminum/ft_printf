/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:20:12 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:10:33 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (NULL);
	s = (const char *)src;
	d = (char *)dest;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char source[] = "Hello, memmove!";
//     char destination[20];

//     ft_memmove(destination, source, 6);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     // memmove(destination, source, 6);
// 	// printf("Source: %s\n", source);
//     // printf("Destination: %s\n", destination);

//     return 0;
// }
