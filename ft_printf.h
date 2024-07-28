/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:54:58 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/07/27 10:55:00 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "./Libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h> //va_list,va_start,va_end,va_arg
#include <stdint.h>
int ft_printf(const char *format, ...);
void fmt_specifier(va_list *args, const char data);
int ft_print_character(int c);
#endif