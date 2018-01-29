
#include <stdio.h>
#include <stdint.h>

#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	    __builtin_va_end(v)
#define va_arg(v,l)	    __builtin_va_arg(v,l)

typedef __gnuc_va_list va_list;

uint32_t sum(uint8_t size_of_list, ...);

int main()
{
    uint32_t total;

    total = sum(4, 1, 2, 3, 4);

    printf("\nResult = %d\n", total);

    return 0;

}

uint32_t sum(uint8_t size_of_list, ...)
{
    uint32_t counter_size;
    uint32_t result;
    uint32_t element_list;

    va_list arg;

    result = 0;

    va_start(arg, size_of_list);

    for(counter_size = 0; counter_size < size_of_list; counter_size++)
    {
        element_list = va_arg(arg, uint32_t);

        result += printf("%*s",element_list,"");

    }

    va_end(arg);

    return (result);

}
