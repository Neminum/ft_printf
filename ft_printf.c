/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:34:38 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/27 17:44:35 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		output;

	i = 0;
	output = 0;
	va_start(args, input);
	if (!input)
		return (-1);
	while (input[i])
	{
		if (input[i] == '%')
		{
			output = ft_crossroads(args, input[++i], output);
			++i;
		}
	}
	return (0);
}

int	ft_crossroads(va_list args, char d, int output)
{
	if (d == 'i' || d == 'd')
		output = output + ft_putnbr_fd_p(va_arg(args, int), 1);
	if (d == 'c' || d == 's')
		output = output + ft_putstr_fd_p(va_arg(args, char *), 1);
	if (d == '%')
	{
		write(1, '%', 1);
		++output;
	}
}

static int	ft_putstr_fd_p(char *s)
{
	int	l;

	l = 0;
	l = ft_strlen(s);
	write(1, s, l);
	return (l);
}

static int	ft_putnbr_fd_p(int n)
{
	return (ft_putstr_fd_p(ft_itoa(n)));
}

// static	int ft_ptohex(void *ptr)
// {

// }

// int main(void)
// {
// 	ft_printf("%d", 100);
// 	return (0);
// }
