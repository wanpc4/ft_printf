#include "ft_printf.h"

/*
    To count how many characters in that unsigned integer "num". For example, "678" so the total characters are 3. Makes sense right?
*/
int ft_length_number(unsigned int num)
{
    int count;

    count = 0;
    while (num != 0)
    {
        count++;
        num = num / 10; //Remove the least significant digit.
    }
    return (count);
}

/*
    To converts an unsigned integer to a string representation.
*/
int ft_uitoa(unsigned int num)
{
    int length;
    char *number;

    length = ft_length_number(num);
    number = (char *)malloc(sizeof(char) * (length + 1)); //Allocate memory
    if (!number)
        return (0);
    number[length] = '\0';
    while (number != 0)
    {
        number[length - 1] = num % 10 + 48;
        num = num / 10;
        length--;
    }
}

/*
    To print an unsigned integer by converting it to a string and then printing the string.
*/
int ft_print_unsigned(unsigned int num)
{
    int count;
    char *number;

    count = 0;
    if (num == 0)
        count += write(1, "0", 1);
    else
    {
        number = ft_uitoa(num);
        count += ft_print_string(number);
        free(number); //Deallocate memory
    }
    return (count);
}
