/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:41:09 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/29 17:15:17 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{

	ft_printf(" %p \n", -1);
	printf(" %p \n", -1);

	// ft_printf("%s", "This should print: c and 1.\n");
	// ft_printf(" %d", (ft_printf("{ %c }", 'c')));
	// printf("\n{ %c }\n",'c');
	// printf("the variable a is: %d\n", 7);
	// ft_printf("%s", "\nThis should print: 2147483647 and 10.\n");
	// ft_printf("%d", (ft_printf("%d", __INT_MAX__)));
	// ft_printf("%s", "\nThis should print: 4294967295 and 10.\n");
	// ft_printf("%d", (ft_printf("%u", __UINT32_MAX__)));
	// ft_printf("%s", "\nThis should print: 43587 and 4.\n");
	// ft_printf("%d", ft_printf("%x", 43587));
	// ft_printf("%s", "\nThis should print a void pointer and 8.\n");
	// ft_printf("%d", ft_printf("%p", p));


	return (0);
}
