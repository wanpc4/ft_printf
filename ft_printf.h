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
void ft_specifier(va_list *args, const char data);
/*
    printf utilities
*/
int ft_print_character(int c);
int ft_print_string(char *str);
int ft_print_number(int number);

/*
    print unsigned
*/
int ft_length_number(unsigned int num3);
int ft_uitoa(unsigned int num2);
int ft_print_unsigned(unsigned int num1);

/*
    print pointer
*/
int ft_pointer_length(uintptr_t num);

#endif