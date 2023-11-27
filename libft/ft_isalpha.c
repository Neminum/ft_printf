/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:06 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/22 13:16:25 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d", ft_isalpha('A'));
// 	printf("%d", ft_isalpha('Z'));
// 	printf("%d", ft_isalpha('a'));
// 	printf("%d", ft_isalpha('z'));
// 	printf("%d", ft_isalpha('-'));
// 	printf("%d", ft_isalpha('0'));
// return (0);
// }
