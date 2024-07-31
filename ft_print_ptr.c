#include "ft_printf.h"

/*
    To calculate the length of the pointer.
*/
int ft_pointer_length(uintptr_t num)
{
    int count;

    count = 0;
    while(num != 0)
    {
        count++;
        num = num / 16;
    }
    return (count);
}

/*
    To identify which character to put to form the string.
*/
void ft_put_pointer(uintptr_t num)
{
    if (num >= 16)
    {
        ft_put_pointer(num / 16);
        ft_put_pointer(num % 16);
    }
    else
    {
        if (num <= 9)
        {
            ft_putchar_fd((num + '0'), 1);
        }
        else
        {
            ft_putchar_fd((num - 10 + 'a'), 1);
        }
    }
}

/*
    To display the pointer
*/
int ft_print_pointer(unsigned long long pointer)
{
    int count;

    count = 0;
    count += write(1, "0x", 2);
    if (pointer == 0)
        count += write(1, "0", 1);
    else
    {
        ft_put_pointer(pointer);
        count += ft_pointer_length(pointer);
    }
    return (count);
}