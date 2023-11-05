/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:37:33 by aaybaz            #+#    #+#             */
/*   Updated: 2022/12/15 17:53:20 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_print_str(char *str);
int	ft_int(int number);
int	ft_u_int(unsigned int number);
int	ft_hex_nbr(unsigned int number, char c);
int	ft_point(unsigned long long a, int sign);
int	ft_print_data(va_list *args, const char c);

#endif