#include "ft_printf.h"

/*
    To count the length of hexadecimal digits.
*/
int ft_hexa_length(unsigned int num)
{
    int count;

    count = 0;
    while (num != 0)
    {
        count++;
        num = num / 16;
    }
    return (count);
}

/*
    To dislay hexadecimal digits.
*/
void ft_put_hexa(unsigned int num, const char format)
{
    if (num >= 16)
    {
        ft_put_hexa(num / 16, format);
        ft_put_hexa(num % 16, format);
    }
    else
    {
        if (num <= 9)
            ft_putchar_fd((num + '0'), 1);
        else
        {
            if (format == 'x')
                ft_putchar_fd((num - 10 + 'a'), 1);
            else if (format == 'X')
                ft_putchar_fd((num - 10 + 'A'), 1);
        }
    }
}

/*
    To call out functions ft_hexa_length() and ft_put_hexa()
*/

int ft_print_hexa(unsigned int num, const char format)
{
    if (num == 0)
        return (write(1, "0", 1)); //To display 0
    else
        ft_put_hexa(num, format); //To display headecimal
    return (ft_hexa_length(num)); //To return the length of hexadecimal.
}