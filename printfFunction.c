
#include <stdio.h>
#include <stdint.h>

#define va_start(v,l)	__builtin_va_start(v,l)
#define va_end(v)	__builtin_va_end(v)

typedef __gnuc_va_list va_list;

uint32_t sum(uint8_t size_of_list, ...);

int main()
{
    uint32_t total;

    total = sum(4, 1,2,3,4);

    printf("Result = %d", total);

    return 0;

}

uint32_t sum(uint8_t size_of_list, ...)
{
    uint32_t counter;
    uint32_t result;

    va_list arg;

    result = 0;

    for(counter = 0; counter < size_of_list; counter++)
    {
        result += printf("%*s",arg,"");

    }

    va_end(arg);

    return (result);

}
