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