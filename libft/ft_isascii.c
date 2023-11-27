/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:08:20 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:16:22 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d", ft_isascii('A'));
// 	printf("%d", ft_isascii('Z'));
// 	printf("%d", ft_isascii('a'));
// 	printf("%d", ft_isascii(128));
// 	printf("%d", ft_isascii(-20));
// 	printf("%d", ft_isascii('0'));
// return (0);
// }
