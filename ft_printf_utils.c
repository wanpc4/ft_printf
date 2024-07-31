#include "ft_printf.h"

/*
    To count how many characters in that string and display each character one by one, forming an array of character (string).

    Each character in "(null)" must be put correctly and that is why we use ft_putstr to do so.
    Notice that in ft_putstr we used void meaning that we did not return anything. It's just a process to work things out, return (6) because
    there are 6 characters in "(null)"
*/
int ft_print_string(char *str)
{
    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }

    int count;

    count = 0;
    while (str[count])
    {
        write(1, &str[count], 1);
        count++;
    }
    return (count);
}

int ft_print_number(int number)
{
    int length;
    char *num_character;

    length = 0;
    num_character = ft_itoa(number); //Integer to ASCII | Use malloc
    length = ft_print_string(number);
    free(num_character); //Deallocate memory
    return (length);
}