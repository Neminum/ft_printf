/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:34:38 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/27 19:34:58 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_crossroads(va_list args, char d, int output);
static int	ft_putstr_fd_p(char *s);
static int	ft_putchar_fd_p(char s);
static int	ft_putnbr_base(int nbr, char d);

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
		else
			++i;
	}
	return (output);
}

static int	ft_crossroads(va_list args, char d, int output)
{
	if (d == 'c')
		output = output + ft_putchar_fd_p(va_arg(args, int));
	if (d == 's')
		output = output + ft_putstr_fd_p(va_arg(args, char *));
	if (d == 'i' || d == 'd')
		output = output + ft_putstr_fd_p(ft_itoa(va_arg(args, int)));
	if (d == 'x' || d == 'X')
		output = output + ft_putnbr_base(va_arg(args, int), d);
	if (d == '%')
	{
		write(1, "%", 1);
		++output;
	}
	return (output);
}

static int	ft_putchar_fd_p(char s)
{
	write(1, &s, 1);
	return (1);
}

static int	ft_putstr_fd_p(char *s)
{
	int	l;

	l = 0;
	l = ft_strlen(s);
	write(1, s, l);
	return (l);
}

static int	ft_putnbr_base(int nbr, char d)
{
	int		l;
	int		t;
	char	*base;

	if (d == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	l = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar_fd_p('-');
		++l;
	}
	t = nbr / 16;
	if (t >= 16)
		ft_putnbr_base(t, d);
	else
	{
		ft_putchar_fd_p(base[t]);
		++l;
	}
	ft_putchar_fd_p(base[nbr % 16]);
	++l;
	return (l);
}

int main(void)
{
	// ft_printf("%c%c%s%c%d%c%x%c%X%c", 'A', '\n', "This is a Test", '\n',
	// 	10451, '\n', 15, '\n', 15, '\n');
	ft_printf("%d", ft_printf("%s", "This should be 17"));
	return (0);
}
