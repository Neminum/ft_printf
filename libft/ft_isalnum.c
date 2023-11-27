/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:59:45 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:16:27 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d", ft_isalnum('A'));
// 	printf("%d", ft_isalnum('Z'));
// 	printf("%d", ft_isalnum('a'));
// 	printf("%d", ft_isalnum('z'));
// 	printf("%d", ft_isalnum('-'));
// 	printf("%d", ft_isalnum('='));
// return (0);
// }
