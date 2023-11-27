/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_h.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:04:04 by tsurma            #+#    #+#             */
/*   Updated: 2023/11/27 19:00:21 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int	l;
	int	t;

	l = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar_fd_p('-');
		++l;
	}
	t = nbr / 16;
	if (t >= 16)
	{
		ft_putnbr_base(t, base);
		++l;
	}
	else
	{
		ft_putchar_fd_p(base[t]);
		++l;
	}
	ft_putchar_fd_p(base[nbr % 16]);
	++l;
	return (l);
}

int	put_hex_upper(int nbr)
{
	char	b[16];

	b[0] = '0';
	b[1] = '1';
	b[2] = '2';
	b[3] = '3';
	b[4] = '4';
	b[5] = '5';
	b[6] = '6';
	b[7] = '7';
	b[8] = '8';
	b[9] = '9';
	b[10] = 'A';
	b[11] = 'B';
	b[12] = 'C';
	b[13] = 'D';
	b[14] = 'E';
	b[15] = 'F';
	return (ft_putnbr_base(nbr, b));
}

int	put_hex_lower(int nbr)
{
	char	b[16];

	b[0] = '0';
	b[1] = '1';
	b[2] = '2';
	b[3] = '3';
	b[4] = '4';
	b[5] = '5';
	b[6] = '6';
	b[7] = '7';
	b[8] = '8';
	b[9] = '9';
	b[10] = 'a';
	b[11] = 'b';
	b[12] = 'c';
	b[13] = 'd';
	b[14] = 'e';
	b[15] = 'f';
	return (ft_putnbr_base(nbr, b));
}
