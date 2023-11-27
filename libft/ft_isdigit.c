/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:56:09 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:16:19 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d", ft_isdigit('A'));
// 	printf("%d", ft_isdigit('Z'));
// 	printf("%d", ft_isdigit('a'));
// 	printf("%d", ft_isdigit('z'));
// 	printf("%d", ft_isdigit('-'));
// 	printf("%d", ft_isdigit('0'));
// return (0);
// }
