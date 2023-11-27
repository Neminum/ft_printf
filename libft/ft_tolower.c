/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:39:17 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:15:37 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%c", ft_tolower('a'));
// 	printf("%c", ft_tolower('A'));
// 	printf("%c", ft_tolower('y'));
// 	printf("%c", ft_tolower('Y'));
// return (0);
// }
