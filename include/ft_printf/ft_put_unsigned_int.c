/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:21:40 by jorteixe          #+#    #+#             */
/*   Updated: 2023/10/12 09:58:52 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_counter_recursive(unsigned int n);

int	ft_put_unsigned_int(unsigned int n, int fd)
{
	int	counter;

	counter = ft_counter_recursive(n);
	if (n >= 0 && n <= 9)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else
	{
		ft_put_unsigned_int(n / 10, fd);
		ft_put_unsigned_int(n % 10, fd);
	}
	return (counter);
}

static int	ft_counter_recursive(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
	{
		counter += 1;
	}
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}
