/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 08:14:22 by jorteixe          #+#    #+#             */
/*   Updated: 2023/11/03 13:41:42 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>

int	ft_printf(const char *chars, ...);
int	ft_putstr_fd_printf(char *s, int fd);
int	ft_putchar_fd_printf(char c, int fd);
int	ft_putptr_fd(unsigned long long n, int fd);
int	put_x_lower(unsigned int n, int fd);
int	put_x_upper(unsigned int n, int fd);
int	ft_put_unsigned_int(unsigned int num, int fd);
int	ft_put_int(int num, int fd);

#endif