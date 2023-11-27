/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:33:19 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:15:36 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%c", ft_toupper('a'));
// 	printf("%c", ft_toupper('A'));
// 	printf("%c", ft_toupper('y'));
// 	printf("%c", ft_toupper('Y'));
// return (0);
// }
