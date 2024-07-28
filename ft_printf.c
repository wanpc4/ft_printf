/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-ab- <wwan-ab-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:59:38 by wwan-ab-          #+#    #+#             */
/*   Updated: 2024/07/27 09:59:41 by wwan-ab-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    
}

void ft_specifier(va_list *args, const char data)
{
    int count;

    count = 0;
    if (data == 'c')
        //If it's a character
        count += ft_print_character(va_arg(*args, int));
    else if (data == 's')
        //If it's a string
        count += ft_print_string(va_arg(*args, char *));
    else if (data == 'i' || data == 'd')
        //If it's a number
        count += ft_print_number(va_arg(*args, int));
    else if (data == 'p')
        //If it's a pointer
    else if (data == 'u')
        //If it's unsigned
    else if (data == 'x')
        //If it's a hexadecimal number in lowercase
    else if (data == 'X')
        //If it's a hexadecimal number in uppercase
    else if (data == '%')
        count += write(1,"%",1);
        // while (data)
        // {
        //     write(1,"%",1);
        //     print++;
        // }
        /*
            ChatGPT answers:
            
            Behavior of print Variable:
            
            Original Version:
            The print variable is incremented once for each % character written.
            
            Modified Version:
            The print variable is incremented indefinitely because of the infinite loop. This will likely cause undefined behavior or a crash due to an infinite write operation.
            
            Effect on the Program:
            
            Original Version:
            This implementation is correct and will write a single % to the standard output and update the print variable.
            
            Modified Version:
            This version will continuously write % to the standard output, likely filling up the output buffer and potentially causing the program to hang or crash.
        */
       return (count);
}

int ft_print_character(int c)
{
    write(1,&c,1);
    return (1);
}